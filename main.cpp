#include <iostream>
using namespace std;

int main(){
    //C++ Conditions
    //Write a programe to check if the given number is positve, negative or zero.
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    if (number>0){
        cout << "The number is Positive.";
    }
    else if(number<0){
        cout << "The given number is negative";
    }
    else{
        cout << "The number is zero.";
    }
    return 0;
    
    
}