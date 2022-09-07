#include<iostream>
using namespace std;

class Human{
    //initialising the data members
    public:
    int height;
    int weight;

    public:

    //accesing the private variables of a class
    void setHeightWeight(int h, int w)
    {
        this->height=h;
        this->weight=w;
    }

};

class Female: public Human{
    public:
    string color;

    public:
    void getColor(string str){
        this -> color = str;
    }
};

int main(){

    //creating the object Adarsh of Human class
    Human Adarsh;
    Adarsh.setHeightWeight(6,70);

    cout<<Adarsh.height<<endl;
    cout<<Adarsh.weight<<endl;


    //creating the object Poonam of Female Class inherited from Human class
    Female Poonam;
    Poonam.getColor("Blonde");
    Poonam.setHeightWeight(5,88);
    cout<<Poonam.color<<endl;
    cout<<Poonam.height<<endl;
    cout<<Poonam.weight;


}