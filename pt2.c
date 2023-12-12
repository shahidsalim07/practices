#include<stdio.h>
#include<stdint.h>
#include<math.h>

int main()
{
    uint8_t a;  
    printf("Enter a natural number: ");
    scanf("%hhu", &a);  
    printf("Number: 0x%X\n", a);


    printf("%d", (a & 0x80) ? 1 : 0);
    printf("%d", (a & 0x40) ? 1 : 0);
    printf("%d", (a & 0x20) ? 1 : 0);
    printf("%d", (a & 0x10) ? 1 : 0);
    printf("%d", (a & 0x08) ? 1 : 0);
    printf("%d", (a & 0x04) ? 1 : 0);
    printf("%d", (a & 0x02) ? 1 : 0);
    printf("%d", (a & 0x01) ? 1 : 0);

    printf("\n");
    return 0;
}
