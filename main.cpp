#include <iostream>
using namespace std;

int main(){
    //C++ Conditions
    //Write a programe to check if the given number is positve, negative or zero.
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    if (num>0){
        cout << "The number is Positive."<< endl << endl;
    }
    else if(num<0){
        cout << "The given number is negative" << endl << endl;
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
                    cout << "The given number is even." << endl << endl;
                }
                else{
                    cout << "The given number is odd." << endl << endl;
                }
         }
        else{
            cout << "The given number is neithe even nor odd instead it is zero." << endl;
            cout << "This is always printed." << endl << endl;
        }

		//Program to find the largest number among three numbers.

		int num1;
		cout << "Enter your first number:"; 
		cin >> num1;
		
		int num2;
		cout << "Enter your second number: ";
		cin >> num2;

		int num3;
		cout << "Enter your third number: ";
		cin >> num3;

	if (num1 >= num2 && num1 >= num3){
		cout << " This is the largest number is : " << num1 << endl << endl;
	}
	if (num2 >= num1 && num2 >= num3){
		cout << " This is the largest number is : " << num2 << endl << endl; 
	}
	if (num3 >= num1 && num3 >= num2){
		cout << " This is the largest number is : " << num3 << endl << endl;
	}

	//Finding the largest number among three number using nested if conditions.

	float n1, n2, n3;
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;

	if(n1 >= n2){
				if(n1 >= n3){
					cout << "The greatest number is : " << n1 << endl;
				}
				else{
					cout << "The greatest number is : " << n3 << endl;
				}
	}
	else{
				if (n2 >= n3){ 
					cout << "The greatest number is : " <<  n2 << endl;
					}
					else{
						cout << "The greatest number is : " << n3 << endl; 
					}
	}


	//Programe to find the days of a week.
	int day;
	cout << "Enter the day number: ";
	cin >> day;

	switch (day){
		case 1 :
		cout << "Today is sunday.";
		break;

		case 2:
		cout << "Today is monday.";
		break;

		case 3:
		cout << "Today is Tuesday.";
		break;

		case 4:
		cout << "Today is Wednsday.";
		break;

		case 5:
		cout << "Today is Thursday. ";
		break;

		case 6:
		cout << "Today is Firday.";
		break;

		case 7:
		cout << "Today is saturday.";
		break;
		default:
		cout << "You have entered invalid number.";

	}

		
    
		
		
		return 0;
    
    
}