#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int num1,int num2){

    if (num1 < 1 || num2 < 1 )
    {
        cout << "Entered invalid number. Please enter a valid number." << endl;
        return -1;
    }
    
    int num = factorial(num1);

    int den = factorial(num2) * factorial(num1 - num2);

    return num/den;

    // return final;

}

int main(){
    int n,r;
    cin>>n>>r;
    // int num = factorial(n);

    // int den = factorial(n) * factorial(n - r);

    // cout<<num<<endl<<den;
    cout<<"Answer is "<<nCr(n,r)<<endl;

}