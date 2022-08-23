#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size, int key){
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1; 
        }
        mid = start+(end - start)/2;

        }
        return ans;
    }

int lastOccurance(int arr[],int size, int key){
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int main(){
    int num[8]={23,56,34,34,34,34,34,45};

    int key;
    cout<<"Enter the key element: "<<endl;
    cin>>key;
    int index = firstOccurance(num,8,key);
    cout<<"Index of key Element is: "<<index<<endl;

    int index_last = lastOccurance(num,8,key);
    cout<<"Index of Key Element is: "<<index_last<<endl;

    return 0;
}