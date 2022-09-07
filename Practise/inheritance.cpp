#include<iostream>
using namespace std;

class Human{

    public:
    int age;
    float height;
    int hands;

    public:
    int getAgeHeight(int age, float height){
    this -> age  = age;
    this -> height = height;
    }
};

class Female: public Human{
    public:
    int bangles;
    int hair;

    int getHairBangles(int b,int h ){
        this -> bangles = b;
        this -> hair = h;
    }
        
    };

int main(){
    Human man;
    man.getAgeHeight(23, 5.5);

    cout<<man.age<<endl;
    cout<<man.height<<endl;

    Female Mitali;
    Mitali.getHairBangles(23455,6789);
    cout<<Mitali.bangles;


}