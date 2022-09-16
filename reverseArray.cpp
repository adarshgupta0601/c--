#include<iostream>
#include<bits\stdc++.h>
using namespace std;


int reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int arr[6]={23,3,45,32,21,78};
    reverseArray(arr,6);
    printArray(arr,6);
}