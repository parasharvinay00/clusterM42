#include <cstdio>

int main() {
    unsigned short a = 0b10101010;
    printf("%d\n", a);
    int b = 0123;
    printf("%d\n" , b);
    unsigned long long d = 0xFFFFFFFFFFFFFFF;
    printf("Listings 2-1:A program that assigns several integer variables and prints them with the appropriate format specifiers: Yabba %x !\n" , a);
    printf("%llu\n" , d);
}