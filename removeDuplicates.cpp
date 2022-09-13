//remove the duplicates and and return the new length of the array

#include<iostream>
#include<vector>
using namespace std;

int getDuplicates(vector<int> arr){
    if(arr.size()==0) return 0;

    int i =0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]) 
        i++;
        arr[i]=arr[j];
    }
    //printing the elements i+1 unique elements
    for(int k =0; k<i+1; k++){
        cout<<arr[k]<<" ";
    }
    cout << endl;

    //returning the lenth of new array containing unique elements 
    return i+1;
}

int main(){
    vector<int> num{5,5,7,7,7,9,9,9};
    cout << getDuplicates(num);

}