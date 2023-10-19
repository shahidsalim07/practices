#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
 char c = 1;
 int seed = time(NULL), counter;
 srand(seed);

 int random_number = rand();
 counter++;

 while( c || random_number % 100 )
  {
  printf("c = %d\n",c++);
  random_number = rand();
  counter++;
  }

 printf("c = %d (after loop while)\n",c);
 printf("It has taken %d times to generate random number to stop the loop.\n",counter);

 return 0;
 }
