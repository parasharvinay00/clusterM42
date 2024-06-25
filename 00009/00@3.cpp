#include <cstdio>=

#include <climits>
using namespace std;

int step_function(int x){
    int result;
    if (x < 0) {
        result = -1;
    }else if (x > 0) {
        result = 1;
    }
    return result;
}



int main(){
    int num1 = 0;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = 1000/10;
    int result3 = step_function(num3);

    printf("Revisiting step_function :A program that prints the results of applying step_function to several integers .");
    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);
    
    return 0;
}













    
    
    