#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//string checkpass(string password);
string checkpass(string p){
	bool length=false, capital=false, number=false, smalL=false;
	
	
	if(p.length() >= 8){
		length=true;
	}
	for(int i = 0; i < p.length(); i++ ){
		if(p[i] >='A' && p[i] <= 'Z')
			capital=true;
			
		if(p[i] >= '0' && p[i] <= '9')
			number=true;
			
		if(p[i] >= 'a' && p[i] <= 'z')
			smalL=true;
			
//		if(p[i] == '@' && p[i] == '!' && p[i]== '?')
//			character=true;
		
	}
	if(length && capital && number && smalL)
		return "strong password";
	else 
		return "week";
}

int main(void){
//	string Password = "NicePass52";
	string Password;
	cout<<"Enter your password : ";
	cin>>Password;
//	string checkpass(Password);

	
	
	cout<<checkpass(Password);
}
