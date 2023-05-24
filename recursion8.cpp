#include <iostream>
#include <cmath>

using namespace std;

int raiseToPower(int, int);


int main(void){
	int Base,Exponent;
	cout<<"please enter the base : ";
	cin>>Base;
	cout<<"please enter the exponent value : ";
	cin>>Exponent;
	raiseToPower(Base,Exponent);
	return 0;
}

int raiseToPower(int base, int exponent){
		int result=1;
		
		for(int i=1;i<=exponent;i++){
			result *= base;
		}
		cout<<"the power of "<<base<<" by "<<exponent<<" is "<<result<<endl;
}
