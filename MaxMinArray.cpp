#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//important point to remmember if you pass array and update it in function then
// original array will also automatically will get updated as addres if array is passed in function
// whereas in variable case value is being passed called pass by value.

int getMax(int num[],int n){

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
        
    }
    return max;


}
int main(){
    int size;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum value of array is :"<<getMax(num,size)<<endl;  //since we have to pass the full array we will pass argument 'num'

    

}