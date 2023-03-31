#include<bits/stdc++.h>
using namespace std;

void common_elements(int arr1[],int m,int arr2[],int n){
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    for(int i=0,j=0;i<m && j<n; ){
            if(arr1[i]==arr2[j]){
                cout<< arr1[i] <<" ";
                i++;
                j++;
            }
            else if( arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
    }
}

int main(){
    int m,n;
    cout<<"Enter the size of array 1: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements in array 1: ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of array 2: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements in array 2: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<"Common Elements are: ";
    common_elements(arr1,m,arr2,n);
    cout<<endl;
    return 0;
}