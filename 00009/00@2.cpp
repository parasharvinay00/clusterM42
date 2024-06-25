#include<iostream>
using namespace std;

int step_function(int x){
    int result = 0;
    if (x < 0) {
        result = -1;
    }else if (x > 0) {
        result = 1;
    }
    return result;
}

int main(){
    int value1 = step_function(100); // value1 is 1
    int value2 = step_function(000000); // value2 is 0
    int value3 = step_function(-10101010); // value3 is -1
    cout<<step_function(value1+value2+value3);
    return 0;
}















    
    
    