#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> arr){

    //for taking out the max profit i.e, we iterate in reverse order
    vector<int> aux = arr;
    for(int i= arr.size()-1; i>=0;i--){
        if(arr[i]>arr[i-1]) arr[i-1]=arr[i];

    }

    for(int i=0; i<arr.size(); i++){
        arr[i]=arr[i]- aux[i];
    }

    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

     int max = 0;
    for(int i =0; i<= arr.size();i++){
        
        if(arr[i]>max) max = arr[i];
        //return max;
    }
    cout<<max<<endl;
}



int main(){
   

    vector<int> num{3,1,4,8,7,2,5};
    maxProfit(num);    

return 0;
    
}