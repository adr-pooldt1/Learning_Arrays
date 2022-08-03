#include<iostream>
using namespace std;
int main(){
    int n,i,m;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n/2;i++){
        swap(arr[i], arr[n-i-1]);
    }
    cout << "Reversed Array";
    for(i=0;i<n;i++){
        cout << arr[i];
    }
}