#include<iostream>
using namespace std;

bool prime_checker(int x){
      if(x<2) return 0;
      for(int i=2;i<x;i++){
            if(x%i==0) return 0;
      }
      return 1;
}

int main(){
      int n;
      cout<<"Enter any number : ";
      cin>>n;
      if(prime_checker(n)) cout<<"This is Prime Number...";
      else cout<<"This is Not Prime Number...";
}