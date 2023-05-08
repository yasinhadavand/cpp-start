#include <iostream>
#include <cmath>

using namespace std;

bool isEven(int num){
	if (num % 2 == 0){
		return true ;
	}else{
		return false ;
	}
}

int main(void){
	int num ;
	cout<<"please enter number : ";
	cin>>num ;
	
	if(isEven(num)){
		cout<<"The given number is even";
	}else{
		cout<<"the given number is odd ";
	}
}