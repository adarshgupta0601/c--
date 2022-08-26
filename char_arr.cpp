#include<iostream>
using namespace std;

char reverseString(char arr[], int size){
    cout << "The reversed string is: ";

    for(int i = size-1; i>=0; i--){
        cout << arr[i] << "";
    }

    cout << endl;
}

int getLength(char arr[]){
    int count=0;
    for(int i =0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

void rev(char arr[], int size){
    int s = 0;
    int e = size - 1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
}


int main(){
    char arr[9]={};
    cout<<"Enter the string- ";
    for(int i = 0; i<9; i++){
        cin>>arr[i];
    }
    
    reverseString(arr,9);
    
    int length = getLength(arr);
    cout<<"The length of the array is: "<<length<<endl; 

    rev(arr,9);
}