#include<iostream>
using namespace std;

int peakElement(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    
}

int main(){
    int num[7]={1,2,1,3,5,6,4};

    int ans = peakElement(num,7);
    cout<<"Peak Element is: "<<ans<<endl;
}