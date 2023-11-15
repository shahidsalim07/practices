#include <stdio.h>

int main() {
  unsigned char a;
  printf("Enter a natural number: ");
  scanf("%hhu", &a);
  printf("Number: %d (0x%X)\n", a, a);

  unsigned char b = (a & 0x80) >> 7;
  unsigned char c = (a & 0x40) >> 6;
  unsigned char d = (a & 0x20) >> 5;
  unsigned char e = (a & 0x10) >> 4;
  unsigned char f = (a & 0x08) >> 3;
  unsigned char g = (a & 0x04) >> 2;
  unsigned char h = (a & 0x02) >> 1;
  unsigned char i = a & 0x01;

  printf("%d%d%d%d%d%d%d%d\n", b, c, d, e, f, g, h, i);

  printf("\n");
  return 0;
}
