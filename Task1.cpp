// Simple Calculator

/* Develop a calculator program that performs basic arithmetic operations such as addition ,subtraction ,multiplication ,and division.
Allow the user to input two numbers and choose an operation to perform*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    char symbol;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter symbol : ";
    cin>>symbol;

    switch(symbol){
        case '+':
        cout<<"The result of a+b : "<<(a+b)<<endl;
        break;

        case '-':
        cout<<"The result of a-b : "<<(a-b)<<endl;
        break;
 
        case '*':
        cout<<"The result of a*b : "<<(a*b)<<endl;
        break;

        case '/':
        cout<<"The result of a/b : "<<(a/b)<<endl;
        break;

        default:
        cout<<"The entered symbol is invalid"<<endl;
    }
}

 



