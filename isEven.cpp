#include<iostream>
using namespace std;


void countCurrency(int amount){
    int notes[6] = [500,200,100,50,20,10];

    int notes[6] = {};

    for(int i=1;i<=6;i++){
        if(amount>=notes[i]){
            notes[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    //To print Notes
    cout<<"Currency Count ->"<<endl;
    for (int i = 0; i < 6; i++)
    {
        if (notes[i]!=0)
        {
            cout<<notes[i]<<" : "<<notes[i]<<endl;
        }
        
    }
}
int main(){
    int amount = 780;
    countCurrency(amount);
    return 0;
}