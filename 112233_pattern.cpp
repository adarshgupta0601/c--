#include<iostream>
using namespace std;

int main(){
    int n=5;
    int row=1;
    while(row<=n){
        int col = 1;
        int value = row;
        while (col<=row)
        {
            cout<<value;
            value-=1;
            col=col+1;
        }
        cout<<endl;
        row+=1;
    }
}