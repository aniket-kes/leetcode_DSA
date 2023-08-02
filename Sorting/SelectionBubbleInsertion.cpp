#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void bubbleSort(int arr[], int n ){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
        }
    }    
}

void insertionSort(int arr[], int n){
    int i = 1;
    while(i < n){
        int j = i - 1;
        int temp = arr[i];
        while(j >= 0){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
                j--;
            }
            else break;
        }
        arr[j+1] = temp;
        i++;
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6, 2, 8, 4, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    print(arr,n);
    
    
    return 0;
}
