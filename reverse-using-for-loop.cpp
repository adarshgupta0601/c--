#include<iostream>
using namespace std;

int printArrayForloop(int arr[],int n){
    for(int i = n-1; i >=0 ; i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int size;
    cin>>size;
    int arr[size]={};

    for (int i = 0; i < size; i++)
    {
        cin>>arr[size];
    }
    printArrayForloop(arr,size);
}
   