#include <iostream>
using namespace std;

int decimal(int n){
		if(n==0){
			return 0;
		}else{
			decimal(n/2);
			cout<<(n%2) ;
		}
}


int main(void){
	int num1;
	cout<<"input a number : ";
	cin>>num1;
	cout<<"The binary value of decimal no : "<<num1<<" = "<<decimal(num1/2);
	return 0;
}