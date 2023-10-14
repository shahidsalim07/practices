#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[] = "input.txt";
    char outputFileName[] = "output.txt";
    int number;

    // Open the input file for reading
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Read numbers from the input file, calculate squares, and write to the output file
    while (fscanf(inputFile, "%d", &number) != EOF) {
        int square = number * number;
        fprintf(outputFile, "%d\n", square);
    }

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    printf("Squares calculated and written to %s\n", outputFileName);

    return 0;
}
