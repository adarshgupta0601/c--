#include<iostream>
using namespace std;

void rev(int *arr, int size){
    int s=0;
    int e = size-1;

    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    for (int i = 0; i < 7; i++)
    {
        //cout<<"hi";
        cout<<arr[i]<<" ";
    }
    


}

int main(){

    int arr[7]={43,67,11,33,87,07,6};
    rev(arr,7);
}