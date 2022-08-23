#include<iostream>
#include<bits\stdc++.h>
using namespace std;

bool L_search(int arr[],int n, int key){
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==key){
            return true;
        }
        return false;
    }
}

int main(){
    int key;
    int num[6]={};
    for(int i = 0 ; i<6; i++){
        cin>>num[6];
    }
    cout<<"Enter the Key Element to search for: ";
    cin>>key;

    bool ans = L_search(num,6,key);
    if(ans){
        cout<<"Key ELement is found successfully: "<<endl;
    }
    else{
        cout<<"Key Element is not found: "<<endl;
    }


}