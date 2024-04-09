#include<iostream>
using namespace std;
int fact(int n){
  if(n==1)
    return 1;
  else
    return n * fact(n-1);
}
int main(){
  int n;
  cout<<"Enter a number to find its factorial :";
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<fact(n);
  return 0;
}
