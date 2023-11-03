#include<iostream>
using namespace std;


int max(int a, int b){
	if(a>b){
		cout<<a<<" is Maximum number"<<endl<<b<<" is minimum number";
	}else{
		cout<<b<<" is maximum number"<<endl<<a<<" is minimum number";
	}
}


int main(void){
	int x,y;
	cout<<"Enter two number :";
	cin>>x>>y;
	max(x,y);
}
