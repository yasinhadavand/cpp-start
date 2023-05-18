#include <iostream>
using namespace std;

int sum_digit_num(int n){
		if(n==0){
			return 0;
		}else{
			return (n%10) + sum_digit_num(n/10);
		}
}


int main(void){
	int num1;
	cout<<"input a number : ";
	cin>>num1;
	cout<<"The sum of digits of "<<num1<<" = "<<sum_digit_num(num1);
	return 0;
}