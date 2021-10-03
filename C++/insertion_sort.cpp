#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,key;
    for(int i=1;i<n;i++)
        {
        key = arr[i];
        j=i-1;
        while(j>=0 and arr[j]>key){
          arr[j+1]=arr[j];
          j=j-1;
          }
        arr[j+1]=key;
        }
}

void printing(int arr[],int n){
        for(int i=0;i<n;i++) 
          cout<<arr[i]<<"";
        cout<<endl;
        }

int main(){
        int arr[]={9,8,7,5,6,4,2,1,3};
        int n=sizeof(arr)/sizeof(arr[i]);
        
        insertion_sort(arr,n);
        printing(arr,n);
        return 0;
}
