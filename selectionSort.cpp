#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int selectionSort(int arr[],int size){
    for(int i = 0; i<size-1; i++){
        int minIndex = i;

        for(int j = i+1; j<size; j++){
            if(arr[minIndex]>arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    
    printArray(arr,size);
}

int main(){
    int num[6]={23,45,21,34,67,32};

    selectionSort(num,6);
}