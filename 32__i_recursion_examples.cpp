#include<bits/stdc++.h>
using namespace std;
// reverse an array using recursion
void swapp(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    swapp(i+1,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    swapp(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}