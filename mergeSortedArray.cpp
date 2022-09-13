#include<iostream>
using namespace std;

void mergeArrays(int arr1[],int n, int arr2[],int m){

    int i = 0, j = 0,k = 0;
    int arr3[10]={};
    while(i < n && j < m){
        if(arr1[i]<arr2[j]) arr3[k++] = arr1[i++];

        else arr3[k++] = arr2[j++];

    }

    //copying remaining element of a array
    while(i<n){
        arr3[k++]=arr1[i++];
    }

    while(j<m){
        arr3[k++]=arr2[j++];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr3[i]<<" ";
    }
    

    
}

int main(){

    int n = 6,m=4;

    int arr1[n]={1,4,7,8,9,17};
    int arr2[m]={11,34,67,99};

    mergeArrays(arr1,n,arr2,m);
}