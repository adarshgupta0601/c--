#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid=(start+end/2);
    //we can update this formula by int mid = start + (end - start/ 2);
    //so that it do not exceed the value of int of 2^31 -1 for handling integer overflow
    //time stamp 31.00

        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            // go to right wala part
            if(key>arr[mid]){
                start = mid + 1;
            }
            else{
            //go to left wala part
                end = mid - 1;
            }
            mid = (start+end)/2;

            return -1;
        }
}

int main(){
    int num[6]={3,5,7,9,45,67};

    int key;
    cout<<"Enter the key to find in an array: ";
    cin>>key;

    int Key_Index = binarySearch(num,6,key);
    cout<<"Key Index is: "<<Key_Index<<endl;
}
