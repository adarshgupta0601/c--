#include<iostream>
using namespace std;


void countCurrency(int amount){
    int notes[6]={500,200,100,50,20,10};
    int noteCounter[6]={};


    //counting notes using greedy approach
    for (int i = 1; i <= 6; i++)
    {
        if (amount>=notes[i])
        {
            noteCounter[i]= amount/notes[i];
            amount = amount % notes[i];

        }
        
    }
    //print notes
    cout<<"Currency Count -> "<<endl;
    for (int i = 0; i < 6; i++)
    {
        if (noteCounter[i]!=0)
        {
            cout<<notes[i]<<":"<<noteCounter[i]<<endl;
        }
        
    }
        
}

int main(){

int amount = 980;
countCurrency(amount);
return 0;
    
}