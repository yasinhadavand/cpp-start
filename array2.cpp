#include <iostream>
using namespace std;

int main(void){
	
	int num[5],i;
	
	for(int i=0;i<5;i++){
		cout<<"enter number In to the arry : ";
		cin>>num[i];
	}
	int max=num[0];
	int min=num[0];
	
	for(int i=0;i<5;i++){
		if (num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
	}
	cout<<"The maxsimum number is : "<<max<<endl;
	cout<<"The minimum number is : "<<min;
}