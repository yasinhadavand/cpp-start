#include<iostream>
using namespace std;

void mulByThree(int []);	//OR void mulByThree(int *);

int main(void){
	int arr[]={3, 7, 12};
	mulByThree(arr);		   
	for(int i=0; i<3; i++)
		cout<<arr[i]<<endl; //9 21 36
	return 0;
}

void mulByThree(int m[]){	//OR void mulByThree(int *m){
	for(int i=0; i<3; i++)
		m[i]=m[i]*3;	//OR *(m+i)=*(m+i)*3; 
}


