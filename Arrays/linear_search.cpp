#include<iostream>
using namespace std;
int main(){
    int n,i;
    int digit;
    int flag = 0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to be searched:" << endl;
    cin >> digit;
    for(i=0;i<n;i++){
        if(arr[i]==digit){
            cout << "The required no is present" << endl;
            flag = 1;
        }
    }
    if(flag==0){
        cout << "The required no is not present" << endl;
    }
}