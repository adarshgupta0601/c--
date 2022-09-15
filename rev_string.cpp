#include<iostream>
#include<string.h>
using namespace std;

string reverseString(string s){
    int start=0;
    int e=s.length() - 1;
    
    while(start<=e){
        swap(s[start++],s[e--]);
    }
    cout<<s<<endl;
}

int occurance(string s){
    int count=0;
    for(int i =0; i<s.length();i++){
        count++;
    }
    cout<<"characters in a string are: "<<count;
}

int main(){
    string s;
    cout<<"Enter the value in string: "<<endl;
    getline(cin,s);

    cout<<"The initial string is: ";
    cout<<s<<endl;

    reverseString(s);
    occurance(s);


}