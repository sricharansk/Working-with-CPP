#include<iostream>
using namespace std;

// function declaration
void swap(int a, int b);

int main(){
    int a = 100, b = 200;

    // Printing original values
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    // Values after Swapping
    swap(a, b);
    return 0;
}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
}