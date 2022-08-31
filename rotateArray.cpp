#include<iostream>
#include<vector>
using namespace std;

int rotateVector(vector<int> arr, int k){
    vector<int> temp(arr.size());

    for(int i=0; i < arr.size();i++){

        //this is the formula since by taking modulus it gives the array from range 1-9
        temp[(i+k)%arr.size()] = arr[i];
    }

    //now print the temp vector
    for( int i : temp){
        cout<<i<<" ";
    }
}

int main(){

    //here k is rotate elements by 2 index
    int k = 3;
    vector<int> num{1,2,3,4,5,6,7};

    rotateVector(num,k);

}