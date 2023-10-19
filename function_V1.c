#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generation(void);

int main(void)
 {
 printf("Call of generaton function for first time:\n");
 generation();

 printf("Call of generaton function for second time:\n");
 generation();

 return 0;
 }


void generation(void)
 {
 char c = 1;
 int seed = time(NULL), counter;
 srand(seed);

 int random_number = rand();
 counter++;

 while( c || random_number % 10 )
  {
  //printf("c = %d\n",c++);
  c++;
  random_number = rand();
  counter++;
  }

 printf("c = %d (after loop while)\n",c);
 printf("It has taken %d times to generate random number to stop the loop.\n",counter);

 }
