#include<iostream>
#include<map>

using namespace std;

int main(){

    //these are of two types orderes map and unordered map
    //in oredered map key values will be arranged in sorted order and vice-versa
    map<int, string> q;

    q[1]="Adarsh";
    q[2]="Gupta";
    q[3]="Derivatives";
    q[4]="Trader";
    q[5]="Data Analyst";

    //to insert the key:values in map
    q.insert({6,"Hardworking"});

    //yha auto ka kya matlab hai??
    for(auto i: q){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    //to find out if the key exist or not
    cout<<"Finding 4--> "<<q.count(4)<<endl;
}