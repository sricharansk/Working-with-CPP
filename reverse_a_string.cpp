#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter a string :";
    cin>>name;
    int n = name.length();
    while(n--){
        cout<<name[n];
    }
}