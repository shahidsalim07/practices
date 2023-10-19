#include <stdio.h>

int main(void)
 {
 char c = 1;

 while( c )
  {
  printf("c = %d\n",c++); // firstly prints c and then inceases
  //printf("c = %d\n",++c); // firstly increases c and then prints
  }

 // 127 dec -> 0111 1111 (1*2^0 + 1*2^1 + ... + 1*2^6 + 0*2^7 =
 //                         1   +   2   + ... +   64  +   0   = 127)
 // 0111 1111
 //+0000 0001
 // 1000 0000
 // char means it will have a sign - information about sign is in MSB
 // 1000 0000 -> "-" (1)000 0000
 //              "-" (0)111 1111
 //             +       000 0001
 //              "-"   1000 0000
 //              "-"1*2^7 = "-"128 -> -128

 //              "-" (1)000 0001
 //              "-" (0)111 1110
 //             +       000 0001
 //              "-"   0111 1111
 //                                -> -127

 //                    1111 1111
 //              "-" (1)111 1111
 //              "-" (0)000 0000
 //             +       000 0001
 //              "-1"  0000 0001
 //                                -> -1
 //                 next binary number (+ 0000 0001) ->
 //         0000 0001 |0000 0000| - other bit information will be "truncated"

 printf("c = %d (after loop while)\n",c);

 return 0;
 }
