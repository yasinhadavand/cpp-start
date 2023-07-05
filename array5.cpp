#include <iostream>
#include <string>
using namespace std;

int main(void){
	string name[2];
	cout<<"Enter your firstname :";
	cin>>name[0];
	cout<<"Enter your lastname : ";
	cin>>name[1]; 
	cout<<"Your full name is :"<<name[0]<<" "<<name[1];
}