#include <cstdio>

// note from vinay: Execution of sum operation involves void function with defalult value of position 1 and position 2 that is 1 and 4 respectively.
void doMagicwithints(int a = 1, int b = 4)
{
    printf("sum int a + int b = %d + %d = %d\n", a, b, a + b); // Note from vinay: number of vaiable should be equal to number of %d
}
int main()
{
    doMagicwithints();

    // Note from vinay: here 4 is missing so it will automatically take the value for position 2 that s 4
    doMagicwithints(30);

    doMagicwithints(30, 5);
}