#include<iostream>
using namespace std;

void reverse(int n){

    int num = n;

    int ldigit;
    int rev = 0 ;
    while(n>0){
        ldigit = n % 10;
        rev = (rev*10) + ldigit;
        n = n/10;
    }

    if(num==rev){
        cout<<"Given No is palindrome: "<<num<<endl;
    }
    else cout<<"Given no is not palindrome: "<<num<<endl;

    cout<<"Reverse digit is: "<<rev<<endl;
}

void checkArmstrong(int n){

    int b = n;
    int ldigit,arm;
    int sum = 0;
    
    while(n>0){
        ldigit = n%10;
        arm = ldigit * ldigit * ldigit;
        sum += arm;
        n=n/10;
    }

    if(b == sum){
        cout<<"Given no. is armstrong No. "<<b;
    }
    else cout<<"Given no. is not armstrong no: ";
// 
}

//this is a recursive approach in this we need to define the basse condition
int factorial(int n){
    if(n<=1) return 1;          // this is the base condition

    return n * factorial(n-1);

}

int fib(int n){
    if(n<=1) return 1;   // check kar yha n ayga ya fr 1??????

    return fib(n-1) + fib(n-2);
}


int main(){
    int n = 151;
    int a = 121;

    reverse(a);
    checkArmstrong(n);
    int ans = factorial(4);
    cout<<"Factroial of a no is: "<<ans<<endl;

    int ans1 = fib(9);
    cout<<ans1;

    



}