#include<iostream>
using namespace std;

// int power(num1 , num2){    //also change thr for loop variable to num1
    int power(){
    int a=2,b=4;              // it do not know a and b variable it only knows num1 and num2 sicne they are passed
    // cin>>a>>b;
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;    
}
int main(){


    // int a,b;
    // int answer = power(2,4);
    // cout<<"Answer is "<<answer<<endl;
    // return 0;
    int ans = power();
    cout<<"Answer is "<<ans<<endl;
}