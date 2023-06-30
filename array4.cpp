#include <iostream>
using namespace std;

int main(void){
	int num[5],key;
	
	for(int i=0;i<5;i++){
		cout<<"enter number In to the arry : ";
		cin>>num[i];
	}
	
	 cout<<"Enter key number : ";
	 cin>>key;
	 
	for(int i=0;i<5;i++){
		if(key==num[i]){
			cout<<"key is find";
		}else{
			cout<<"key is not found";
			break;
		}
	}
}