#include<iostream>
using namespace std;
int main(){
    int original = 0, reversed = 0,temp = 0,rem = 0;
    cout<<"Enter a number :";
    cin>>original;
    temp = original;
    while(temp>0){
        rem = temp%10;
        reversed = (reversed*10)+rem;
        temp = temp/10;
    }
    cout<<"The Reversed Number is :"<<reversed<<endl;
    if(original == reversed)
        cout<<"The number is a \"PALINDROME\"";
    else
        cout<<"The number is not a \"PALINDROME\"";
    return 0;
}

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//   int n,r,sum=0,temp;    
//   cout<<"Enter the Number=";    
//   cin>>n;    
//  temp=n;    
//  while(n>0)    
// {    
//  r=n%10;    
//  sum=(sum*10)+r;    
//  n=n/10;    
// }    
// if(temp==sum)    
// cout<<"Number is Palindrome.";    
// else    
// cout<<"Number is not Palindrome.";   
//   return 0;  
// }  