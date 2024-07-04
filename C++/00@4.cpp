#include <cstdio>
using namespace std;

int step_function(int x){
    int absolute_value = 0;
    if (x < 0) {
        absolute_value = -1;
    }else if (x > 0) {
        absolute_value = 1;
    }
     return absolute_value;
}

int main() {
    int my_mum = -10;
    printf("A function that returns the absolute value of its single argument ."); 
    printf("The absolute values of %d is %d.\n", my_mum, step_function(my_mum));
}    