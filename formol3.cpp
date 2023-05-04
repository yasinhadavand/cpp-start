#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int x,y,z;
	float f;
	cout<<"please enter value of x :";
	cin>>x;
	cout<<"please enter value of y :";
	cin>>y;
	cout<<"please enter value of z :";
	cin>>z;
	
	f=(2*x+10*y/log10(z));
	cout<<"Result is :" << f; 
}