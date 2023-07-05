#include <iostream>
using namespace std;

int main(){
    
    int n, sum=0, rem, result = 1;
    cin>>n;
    while(n>0){
        rem = n%10;
        result = result * rem;
        sum = sum + rem;
        n = n/10;
    }
    cout<<result-sum<<endl;

}