#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int a,b;
	float m,n;
	cout<<"please enter the value of a :";
	cin>>a;
	cout<<"please enter the value of b :";
	cin>>b;
	
	m=5+2*(log10(pow(a,b)));
	cout<<"the result of formula a is :"<<m <<endl ;

	n=2/log10(exp(2));
	cout<<"the result of formula b is :"<<n <<endl;
	cout<<"The remainder as float is :" <<fmod(m,n);
}