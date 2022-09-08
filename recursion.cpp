#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1) return 1;
    return n * factorial(n-1);
}

int main(){
    int n = 4;
    int a = 6;

    int ans = factorial(n);
    cout<<ans<<endl;

    //int ans1 = fib()
}