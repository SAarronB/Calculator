//All Original Code
#include "Calculator.hpp"

int operation(string);
int Calculator::inputSystem() {
	//startAbstraction
	string userResponse;
	cout << "Add(add) | Subtract(sub) | multiply(multi) | divide(div) \n";
	cout << "What operation would you like to make?\n";
	cin >> userResponse;
	//endAbstraction
	if (userResponse == "add") {
		operation(userResponse);
	}
	else if (userResponse == "sub") {
		operation(userResponse);
	}
	else if (userResponse == "multi") {
		operation(userResponse);
	}
	else if (userResponse == "div") {
		operation(userResponse);
	}
	else if (userResponse == "exit") {
		return 0;
	}
	else {
		inputSystem();
	}
}

//startAlgorithm
void Calculator::operation(string userResponse) {
	int numberOne;
	int numberTwo;
	cout << "what is your first digit" << endl;
	cin >> numberOne;
	cout << "what is your second digit" << endl;
	cin >> numberTwo;
	if (userResponse == "add") {
	    cout << "Your Two Numbers Added are: " << numberOne + numberTwo << endl;
		inputSystem();
	}
	else if (userResponse == "sub") {
		cout << "Your Two Numbers Subtracted are: " << numberOne - numberTwo << endl;
		inputSystem();
	}
	else if (userResponse == "multi") {
		cout << "Your Two Numbers Multiplied are: " << numberOne * numberTwo << endl;
		inputSystem();
	}
	else if (userResponse == "div") {
		cout << "Your Two Numbers Divided are: " << numberOne / numberTwo << endl;
		inputSystem();
	}
	else {
		inputSystem();
	}
}
//endAlgorithm


void Calculator::start(){
    inputSystem(); 
}


