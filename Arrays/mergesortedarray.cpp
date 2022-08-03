#include<bits/stdc++.h>
#define fr(a,b) for(int i = a; i < b; i++)
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int a[n],b[m],c[n+m]={0};
  fr(0,n)
    cin>>a[i];
  fr(0,m)
    cin>>b[i];
  
  int i=0,j=0,k=0;
  while(i<n && i<m){
    if(a[i]>b[j]){
      c[k]=b[j];
      k++;j++;
    }
    else{
      c[k]=a[i];
      k++;i++;
    }
  }
  while(i<n){
    c[k]=a[i];
    k++;i++;
  }
  while(j<n){
    c[k]=b[j];
    k++;j++;
  }
  fr(0,(n+m))
    cout<<c[i]<<" ";


  return 0;
}