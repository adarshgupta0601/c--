#include<iostream>
using namespace std;

int bubbleSort(int *arr,int size){

    for(int i = 0; i<size-1; i++){
        //for optimization of code if array is already sorted in first pass
        bool swapped = false;
        for(int j = 0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        //already sorted in this case time complexity is O(n)
        break;
    }
    
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
}


int main(){
    int num[6]={23,54,12,89,04,56};

    bubbleSort(num,6);
}