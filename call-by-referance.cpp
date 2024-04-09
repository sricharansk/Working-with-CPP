#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main(){
  int a = 100, b = 200;
  cout<<"Value of a before Swapping is :"<<a<<endl;
  cout<<"Value of b before Swapping is :"<<b<<endl;

  swap(a,b);
  cout<<"Value of a after Swapping is :"<<a<<endl;
  cout<<"Value of b after Swapping is :"<<b<<endl;
  return 0;
}

void swap(int &x, int&y){
  int temp;
  temp = x;
  x = y;
  y = x;
}
