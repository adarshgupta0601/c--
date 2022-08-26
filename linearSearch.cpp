#include<iostream>
using namespace std;

bool getKeyElement(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size]={};
    
    for(int i = 0;i < size;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key element to search for: "<<endl;
    cin>>key;
    
    bool found = getKeyElement(arr,size,key);
    
    if (found)    
    {
        cout<<"Key element is present!"<<endl;
    }
    else{
        cout<<"NOT FOUND! "<<endl;
    }
    
    }