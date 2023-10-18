#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
{
    int i = 0;
    int occurrence_number, occurrence_number_generator_seed;

    occurrence_number_generator_seed = time(NULL);
    printf("Random number generator seed - %d\n", occurrence_number_generator_seed);

    srand(occurrence_number_generator_seed);

    i = i + 1; // Note: Operations are not performed simultaneously
               // Here, two operations are performed (addition - + and assignment - =)
               // The addition takes priority and is executed first
               // i++; increment (increase the number by one unit)
               // ++i;
               // i += 1;
    occurrence_number = rand();

    while (occurrence_number % 10)
    {
        printf("%d. number\n", i);
        printf("Occurrence number - %d\n", occurrence_number);
        printf("This number is not divisible by 10 without a remainder.\n");
        occurrence_number = rand(); // Without this line, we would get an infinite loop
        i++;
    }

    printf("End of generation.\n");
    printf("Finally, the number %d in iteration %d is divisible by 10 without a remainder.\n", i, occurrence_number);

    return 0;
}
