#include<iostream>
using namespace std;
int max_element(int arr[], int n){
    int a = arr[0];
    int i;
    for(i=0;i<n;i++){
            if(a<=arr[i]){
                a = arr[i];
            }
        }
    cout << a << endl;
    return 0;
}
int min_element(int arr[], int n){
        int a = arr[0];
        int i;
        for(i=0;i<n;i++){
            if(a>=arr[i]){
                a = arr[i];
            }
        }
        max_element(arr, n);
        cout << a << endl;
        return 0;
}
int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    min_element(arr, n);
}