#include <iostream>
#include <cmath>

using namespace std;

void showAlphabet(char character){
	char n;
	
	if(character= 'z' || 'Z'){
		
		cout<<"Z is the last character in the alphabet";
		
	}else{
		
		cout<<"rest of the character(s) are :";
		
		if(isupper(character)){
			for(n = character+1;n<='z';n++){
				cout<<n;
			}
			
		}else{
				for(n = character+1;n<='Z';n++){
				cout<<n;
				}
		}
	}
	
}
int main(void){
	char character;
	cout<<"please enter a charactor : ";
	cin>>character;
	showAlphabet(character);
	return 0;
}