#include<stdio.h>
// pointer increment and decrement
int main () {
    int age = 32;
    int *ptr = &age;
    printf("ptr   = %u\n" , ptr);
    ptr++;
    printf("ptr++ = %u\n" , ptr);
    ptr--;
    printf("ptr-- = %u\n" , ptr);

}