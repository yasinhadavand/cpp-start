#include <iostream>
//#include <cmath>

using namespace std;

double perform(double num1, double num2, char operand){
	
	double result; 
	
	switch (operand){
		case '+' :
			result = num1 + num2;
			break;
		case '-' : 
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/' :
			result = num1 / num2;
			break;
		default:
			cout<<"Invalid oparand";
			result = 0;
			break;
		
		;
	return result;
	}
}

void GetNumAndOp(){
	double num1, num2;
	char operand;
	
	cout<<"Enter num 1 :";
	cin>>num1;
	cout<<"Enter num 2 :";
	cin>>num2;
	cout<<"Enter oparand (+,-,*,/) :";
	cin>>operand;
	
    double result=perform(num1,num2,operand);
	
	cout<<"Result is :"<< result;
}
int main(){
	GetNumAndOp();
	return 0;
}
