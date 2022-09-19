#include<iostream>
#include<string>
using namespace std;

string reverse(string s){
    string original = s; 
    int str = 0;
    int e = s.length() - 1;

    while(str<=e){
        swap(s[str++],s[e--]);
    }

    cout<<"The reverse string is: "<<s<<endl;

    if(original == s) cout<<original <<" "<<"String is Palindrome"<<endl;

    else cout<<s<<""<<"String is not palindrome: "<<endl;
}



int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    getline(cin,s);
    reverse(s);
    //palindrome(s);


}