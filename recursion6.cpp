#include <iostream>
#include <cmath>

using namespace std;

void multiplicationTable(){
		int num,mult;
		cout<<"please enter a number :";
		cin>>num;
		
	for(int n=0;n<=num;n++){
		cout<<num<<" * "<<n<<" : "<<num*n<<endl;
	}

}
int main(void){
	multiplicationTable();
	return 0;
}