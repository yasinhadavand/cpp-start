#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int b,y,x,choice;
	float sum,side,res;
	cout << "1- calculate sin" <<endl;
	cout << "2- calculate cos" <<endl;
	cout << "3- calculate tan" <<endl;
	cout <<"please make your choice :";
	cin>>choice;
	
	
	
	switch(choice){
	case 1:
		
	cout<<"please enter value of b :";
	cin>>b;
	cout<<"please enter value of x :";
	cin>>x;
	cout<<"please enter value of y :";
	cin>>y;
	
	sum = pow(x, b) + sqrt(b + pow(y, x));
	cout<<"The result of formula is :"<< sin(sum);
	break;
	
	case 2:
		
	cout<<"please enter value of b :";
	cin>>b;
	cout<<"please enter value of x :";
	cin>>x;
	cout<<"please enter value of y :";
	cin>>y;
	
	side = exp(b) / (x + pow(x,5));
	sum = y + side;
	cout<<"The result of formula is :"<< cos(sum);
	break;
	
	case 3:
		
	cout<<"please enter value of b :";
	cin>>b;
	cout<<"please enter value of x :";
	cin>>x;
	cout<<"please enter value of y :";
	cin>>y;
	
	res=x + ((b+pow(x,y))/(pow(x,5)+exp(2)*y));
	cout<<"The result of formula is :"<< tan(res);
	break;
	}
}