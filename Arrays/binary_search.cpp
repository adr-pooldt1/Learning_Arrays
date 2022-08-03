#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
    int flag = 0;
    int si = 0;
    int li = n-1;
    int mid = si + (li - si)/2;
    while(si<=li){
        if(arr[mid]==key){
           cout << "Element found" << endl;
           flag = 1;
           return 0;
        }
        //going to right side of row
        if(key>arr[mid]){
           si = mid + 1;
        }//going to left side of row
        else{
            li = mid - 1;
        }
        mid = si + (li - si)/2;

    }
    if(flag==0){
        cout << "Element not found" << endl;
    }
    return -1;

}
int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the no which is required" << endl;
    cin >> key;
    binary_search(arr, n, key);
}