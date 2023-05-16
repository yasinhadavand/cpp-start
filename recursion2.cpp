#include <iostream>
using namespace std;

int digitsnum(int n){
		if(n/10==0){
			return 1;
		}else{
			return 1 + digitsnum(n/10);
		}
}


int main(void){
	int num1;
	cout<<"input a number : ";
	cin>>num1;
	cout<<"The number of digits in the number is : "<<digitsnum(num1);
	return 0;
}