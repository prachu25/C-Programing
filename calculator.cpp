#include <iostream>
using namespace std;

int main() {
    double no1, no2;
    string operation;
    double result;

    
    cout << "Enter first number: ";
    cin >> no1;
  
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
     cout << "Enter second number: ";
    cin >> no2;

   if(operation == "+"){
       cout << "the addition is: " << no1 + no2;
   }
    else if(operation == "-"){
       cout <<"the substraction is: " << no1 - no2;
    }
   else if(operation == "*"){
       cout << "the multiplcation is: " << no1 * no2;
       
   }
    else if(operation == "/"){
       cout <<"the division is: " << no1 / no2;
       
    }
    else{
        cout << "Operation  is  invalid!!";
    }
    return 0;
}