#include <iostream>
#include <cmath>

using namespace std;

int maximumNumber(int, int ,int);
int minimumNumber(int,int,int);

int main(void){
	int num1,num2,num3;
	cout<<"please enter value of x : ";
	cin>>num1;
	cout<<"please enter value of y : ";
	cin>>num2;
	cout<<"please enter value of z : ";
	cin>>num3;
	cout<<"maximum number is : "<<maximumNumber(num1,num2,num3)<<endl;
	cout<<"minimum number is : "<<minimumNumber(num1,num2,num3);
	return 0;
}
int maximumNumber(int a, int b,int c){
//	int result;
	if(a>b && a>c){
		return a;
			
	}else if(b>a && b>c){
		
		return b;
		
	}else if(c>a && c>b){
		
		return c;
	}
	
}
int minimumNumber(int d, int f,int g){
//	int result;
	if(d<f && d<g){
		return d;
			
	}else if(f<d && f<g){
		
		return f;
		
	}else if(g<d && g<f){
		
		return g;
	}
	
}