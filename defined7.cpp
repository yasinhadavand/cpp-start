#include <iostream>
// #include <cmath>

using namespace std;

void showAlphabet(char);
bool iscapital(char n){
			if (n>='A' && n<='Z')
		{
			cout<<"the alphabet is capitsl letters; and rest of letter :  ";
			return true;
		}else{
			cout<<"the alphabet is small letters; and rest of letter : ";
			return false;
		}
	};

int main(void){
	char character;
	cout<<"please enter a charactor : ";
	cin>>character;
	showAlphabet(character);
	return 0;
}
void showAlphabet(char n){
	// char n = 'a';

	if(n == 'z' || n == 'Z'){
		
		cout<<"Z is the last character in the alphabet";
		
		
	}else{
		// cout<<"rest of alphabet : ";

		if(iscapital(n)){
				for (n = n+1; n <= 'Z'; n++)
				{
					cout<<n;
				}
		}else{
				for (n = n+1; n <= 'z'; n++)
				{
					cout<<n;
				}
		}
		
		
		
	}
}