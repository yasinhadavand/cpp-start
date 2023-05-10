#include <iostream>
#include <cmath>

using namespace std;


void TotalAge(){
	int age,total;
	for(int n=1;n<=10;n++){
		cout<<" please enter student "<<n<<" age:"<<endl;
		cin>>age;
		total+=age;
	}
	cout<<"The total age of student is:"<<total<<endl;
}

int main(void){
	TotalAge();
	return 0;
	
}