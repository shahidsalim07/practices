#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
{
    int random_number, random_number_generator_seed;

    random_number_generator_seed = time(NULL);
    printf("Random number generator seed - %d\n", random_number_generator_seed);

    srand(random_number_generator_seed);
    random_number = rand();
    printf("Random number - %d\n", random_number);

    // "False" - is just numeric zero
    // "True"  - is all other values (if any bit is 1)

    if (random_number % 10 == 0) // This is how you would write it in school, and it's normal
    {
        printf("This number is divisible by 10 without a remainder.\n");
    }

    if (random_number % 10) // Checking if this number is divisible by 10 without a remainder
    {
        printf("This number is not divisible by 10 without a remainder.\n");
    }
    else // Note: else always belongs to some "if" (there can be an "if" without "else," but not "else" without "if")
    {
        printf("This number is divisible by 10 without a remainder.\n");
    }

    return 0;
}
