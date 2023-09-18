#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	string Operation;
	cout << "Welcome to the Calculator" << endl;
	
	cout << "1. Operation Aggregation" << endl;
	cout << "2. Process subtraction" << endl;
	cout << "3. operation multiplication" << endl;
	cout << "4. process division" << endl;
	
	cout << "Enter the action you want to take: ";
	cin >> Operation;
	
	
	if(Operation == "1"){
		
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		
		cout << "Aggregation: " << a + b << endl;
		
	}else if(Operation == "2"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		
		cout << "subtraction: " << a - b << endl;
		
	}else if(Operation == "3"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		
		cout << "multiplication: " << a * b << endl;
		
	}else if(Operation == "4"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		
		cout << "division: " << a / b << endl;
		
	}else{
		cout << "you entered wrong..." << endl;
	}
	
return 0;	
}