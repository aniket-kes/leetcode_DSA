#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter row and col: ";
    cin>>row>>col;

    int a[col];
    cout<<"Enter number of col: ";
    for(int i = 0;i < col; i++){
        cin>>a[i];
    }

    int **arr = new int*[row];
    for(int i = 0;i < row; i++){
        arr[i] = new int[a[i]];
    }

    cout<<"Enter elements: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < a[i]; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < a[i]; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}