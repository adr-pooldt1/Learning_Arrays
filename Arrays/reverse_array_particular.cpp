#include<iostream>
using namespace std;
int main(){
    int n,i,m;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the index after you have to reverse the array:" << endl;
    cin >> m;
    int end = n-1;
    for(i=m+1;i<=end;i++){
        swap(arr[i], arr[end]);
        end--;
    }
    cout << "Reversed Array";
    for(i=0;i<n;i++){
        cout << arr[i];
    }
}