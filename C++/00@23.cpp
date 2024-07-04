#include <iostream>
using namespace std;

int main(){

    int  i= i++;
    int j = i++, k;

    k = ++i + ++j + i++ + ++i + j-+ + i--;  

    cout<<k<<" "<<j<<" "<<" "<<i<<endl;


    return 0;
}