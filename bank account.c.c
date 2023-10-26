#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a complex data structure
typedef struct {
    int id;
    char name[50];
    double balance;
} BankAccount;

// Function to deposit money into a bank account
void deposit(BankAccount *account, double amount) {
    account->balance += amount;
}

// Function to withdraw money from a bank account
int withdraw(BankAccount *account, double amount) {
    if (amount > account->balance) {
        return 0;  // Insufficient funds
    }
    account->balance -= amount;
    return 1;  // Successful withdrawal
}

// Function to display account information
void displayAccount(BankAccount account) {
    printf("Account ID: %d\n", account.id);
    printf("Account Holder: %s\n", account.name);
    printf("Account Balance: $%.2f\n", account.balance);
}

int main() {
    // Create an array of bank accounts
    BankAccount accounts[3];

    // Initialize the accounts
    accounts[0].id = 101;
    strcpy(accounts[0].name, "Alice");
    accounts[0].balance = 1000.0;

    accounts[1].id = 102;
    strcpy(accounts[1].name, "Bob");
    accounts[1].balance = 1500.0;

    accounts[2].id = 103;
    strcpy(accounts[2].name, "Charlie");
    accounts[2].balance = 2000.0;

    // Deposit and withdraw money from accounts
    deposit(&accounts[0], 500.0);
    withdraw(&accounts[1], 700.0);

    // Display account information
    printf("Bank Account Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Account %d:\n", i + 1);
        displayAccount(accounts[i]);
    }

    return 0;
}
                     