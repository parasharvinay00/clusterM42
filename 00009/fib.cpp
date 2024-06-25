#include<iostream>
using namespace std;

int fib(int n){
    if(n <= 2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    cin>>n;
    int i = 1;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
    while (i <= n)
    {
        cout<<fib(i)<<" ";
        i++;
        /* code */
    }
    
    



    return 0;
}