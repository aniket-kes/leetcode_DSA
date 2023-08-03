#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    
    for(int i = 0, j = n -i- 1; i < n/2; i++, j--){
        swap(arr[i], arr[j]);
    }

    printArray(arr,n);
    return 0;
}
