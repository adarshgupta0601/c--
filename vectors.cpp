#include<iostream>
#include<vector>

using namespace std;

int main(){
    //initilising vectors
    vector<int> v;

    //checking the capacity and size of vectors
    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size of vector-->"<<v.size()<<endl;

    cout<<endl;

    v.push_back(3);
    v.push_back(5);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size of vector-->"<<v.size()<<endl;


    cout<<endl;

    //to print the element at index position
    cout<<"Element at 1st Index is- "<<v.at(1)<<endl;

    cout<<endl;

    cout<<"Element at front is- "<<v.front()<<endl;
    cout<<"Element at back is- "<<v.back()<<endl;

    cout<<endl;

    //initialising vectors, lists, deque with arguments as (size, default value)
    vector<int> a(5,7);


    //printing the vetors
    cout<<"Printing the value in vector- "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }

// funtion to initialise an array with elements

//     vector<int> num{3,1,4,8,7,2,5};

//     for(int i : num)
//         cout<<i<<" ";
 }