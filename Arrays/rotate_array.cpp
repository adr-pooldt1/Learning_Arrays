#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the amount of rotation" << endl;
    cin >> j;
    int temp[n];
    for(i=0;i<n;i++){
     temp[(i+j)%n] = arr[i];  
    }
    for(i=0;i<n;i++){
        cout << temp[i];
    }
}