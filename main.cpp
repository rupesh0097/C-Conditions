#include <iostream>
using namespace std;

int main(){
    //C++ Conditions
    //Write a programe to check if the given number is positve, negative or zero.
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    if (num>0){
        cout << "The number is Positive."<< endl;
    }
    else if(num<0){
        cout << "The given number is negative" << endl;
    }
    else{
        cout << "The number is zero."<< endl << endl;
    }   


		//C++ Nested if Condition.
    //If statement inside another if statement is nested if condition.
    //Write a programe to check if the given number is even, odd or neither.
        
         int number;
         cout << "The given number is: ";
         cin >> number;
         
         if (number != 0){
                if ((number % 2) == 0 ){
                    cout << "The given number is even." << endl;
                }
                else{
                    cout << "The given number is odd." << endl;
                }
         }
        else{
            cout << "The given number is neithe even nor odd instead it is zero." << endl;
            cout << "This is always printed.";
        }

		
    
		
		
		return 0;
    
    
}