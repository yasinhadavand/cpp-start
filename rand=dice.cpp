#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sumNum(int i,int j,int CmpGuess){

	
	
	if(i>6 || j>6){
		cout<<"incorrect number .choose number between 1 to 6.";
	}else if(i+j>=CmpGuess){
		cout<<"computer guess is : "<<CmpGuess<<" So You Won !!! "<<endl;
	}else{
	cout<<"computer guess is : "<<CmpGuess<<" So You Lose !!! "<<endl;
	}
	
}

int main(void){
	int answer,num1,num2,number;
	
	srand(time(0));
	number = (rand() % 6) + 1;
	
	
	cout<<"lets play Dice together ! "<<endl;
	cout<<"Are you ready ? 1=yes 0=no "<<endl;
	cin>>answer;

    switch(answer){
    case 1:
        cout<<"thats graet! lets play ."<<endl<<" "<<endl<<"choose two number? between 1 to 6 "<<endl
        <<"If the selected sum is greater or equal, you win, otherwise, I am sorry"<<endl<<" "<<endl<<"Enter first number : ";
        cin>>num1;
        
        cout<<"Enter second number : ";
        cin>>num2;
        
        
        sumNum(num1,num2,number);
        
        
        break;

    case 0:
		cout<<"I hope see you later ";
        break;

    default:
        break;
    }
	system("pause");
	return 0;
}