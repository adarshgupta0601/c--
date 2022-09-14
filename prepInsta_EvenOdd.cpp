
// You are playing an online game. In the game, a list of N numbers is given.
// The player has to arrange the numbers so that all the odd numbers of the list come after the even numbers. 
// Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0; i<n; i++)
      cin>>a[i];
    
    int p1=0, p2= n-1;    
    while(p1 < p2){
        
        while(a[p1]%2 == 0 and p1<p2)
           p1++;
        
        while(a[p2]%2 != 0 and p1<p2)    
           p2--;
        
        if(p1 < p2){
            swap(a[p1], a[p2]);
            p1++;
            p2--;
        }
    }    
    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";
    
    return 0;
}
