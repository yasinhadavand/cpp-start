#include <iostream>

using namespace std;

void iseven(int num1,int num2){
	if(num1<=num2){
		if(num1 % 2 == 0){
			cout<<num1<<" ";
		
		}
	iseven(num1+1,num2);
	}
}

void isodd(int num1,int num2){
	if(num1<=num2){
		if(num1 % 2 != 0){
			cout<<num1<<" ";
		
		}
	isodd(num1+1,num2);
	}
}



int main(void){
	int start=1,end;
	cout<<"input the range to print starting from 1 :";
	cin>>end;
	cout<<"All even number from 1 to "<<end<<" :";
	iseven(start,end);
	cout<<endl;
	cout<<"All odd number from 1 to "<<end<<" :";
	isodd(start,end);
	

}