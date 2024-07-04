#include<iostream>
using namespace std;



int main(){
    

    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[sizeof(arr)/sizeof(arr[0])];
    int i = n-1;
    int j = 0;
    


    while(i != 0){
        ans[j] = arr[i];
        i--;
        j++;
        

    }
    
      
   

    for(int k = 0; k<sizeof(ans)/sizeof(ans[0]);i++){
        cout<<arr[i];
    }
// Iterative C program to reverse an array
#include <stdio.h>

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

/* Driver function to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverseArray(arr, 0, n - 1);
    printf("Reversed array is \n");
    printArray(arr, n)*6;
    

    return 0;
}