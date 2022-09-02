#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

bool checkAnagram(string str1, string str2){

    if(str1.length()!=str2.length()){
        return false;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    //compare sorted strings
    for(int i = 0; i<=str1.length(); i++){
        if(str1[i]!=str2[i]) return false;

        else return true;
    }



    

}

int main(){
    string str1 = "geeksforgeeks";
    string str2 = "forgeeksgeeks";
    
    //checkAnagram(str1,str2);

    if(checkAnagram(str1,str2)) cout<<"Given string is Anagram: "<<endl;

    else cout<<"Given string are NOT Anagram"<<endl;


}