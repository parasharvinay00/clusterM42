#include<iostream>
using namespace std;//Decoding

int main(){

    int n;
    cin>>n;

    int count=0;
    for(int i = 0;i < n; i++){
        for(int j = 1; j < i; j++){
            cout<<count<<" 0 ";
            count++;
        }
        cout<<endl;
    }  return 0;
}