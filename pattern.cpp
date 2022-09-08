#include<iostream>
using namespace std;

int main(){
    int n=5;
    int row=5, col=6;
    // cout<<"Eneter the now of Rows and Column: ";
    // cin>>row,col;
    

    while(row<=n){
        col = 1;
        while(col<=row){
            cout<<col;
            col+=1;
        }
        row+=1;
        //cout<<"hi"<<endl;
    }
}