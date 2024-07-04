#include<iostream>
using namespace std;

int main(){
    int row = 9, col = 9;
    
    for(int i = 1;i <= row; i++){
        for(int j = i;j >= 0;j--){
            cout<<'0'<<" ";
        }
        cout<<endl;
    }

    return 0;
}