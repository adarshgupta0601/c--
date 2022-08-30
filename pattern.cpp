#include<iostream>
using namespace std;

int main(){
    int row=5, col=6;
    // cout<<"Eneter the now of Rows and Column: ";
    // cin>>row,col;
    

    while(row<=col){
        col = 1;
        while(row<col){
            cout<<col;
            col+=1;
        }
        row+=1;
        cout<<endl;
    }
}