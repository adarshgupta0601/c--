#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<string> getReverse(vector<string> str){
    vector<string> ans;
    for(int x=0; x< str.size(); x++){
        string mystr = str[x];

        int s = 0;
        int e = mystr.size() - 1;

        if(s<=e){
            swap(mystr[s++],mystr[e--]);
        }

        ans.push_back(mystr);
    }
    return ans;
}

int main(){

    vector<string> s;
    s.push_back("Adarsh");
    // s.push_back("A");
    // s.push_back("d");
    // s.push_back("a");
    // s.push_back("r");
    // s.push_back("s");
    // s.push_back("h");
    // s = {"Adarsh"} = 1
    // s = {"A", "d", ...., ..} = 6
    vector<string> ans = getReverse(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
    
}