#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int first = 0;
    int last = size;
    int mid = first + (last - first)/2;

    while(first <= last){
        if (arr[mid] == key) return mid;

        if (arr[mid]>key) return first = mid + 1;

        if (arr[mid]<key) return last = mid - 1;

        mid = first + (last - first)/2;

        return -1;

    cout<<endl;

    } 
}

int main(){
    int key = 67;
    int num[6]={1,2,3,4,7,9};
    int num1[6]={0,1,2,1,1,4};

    int Key_Index = binarySearch(num,6,67);
    cout<<"Key Index is: "<<Key_Index<<endl;
}