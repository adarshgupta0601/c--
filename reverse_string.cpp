#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int rev = 0,rem ;
    int i = 1;
    int val = 4567;
    

    while( val!=0 ){
        rem = val % 10;
        if (rev > INT_MAX/10 || rev < INT_MIN/10)
        {
            return 0;
        }
        

        rev = (rev * 10) + rem;
        val = val / 10;
    }

    cout<<rev<<endl;
}