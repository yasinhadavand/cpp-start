
#include<iostream>
using namespace std;

int sum(int [], int);
void fillArray(int [], int);

int main(void){
	int a[]={22, 44, 66};
	int size = sizeof(a)/sizeof(int); 
//    3  =    12    /    4  
	for(int i=0; i<size; i++)
		cout << "\ta[" << i << "]=" << a[i] << endl;
	cout << "Sum of elements in a = " << sum(a, size) << endl;
	fillArray(a, size);
	return 0;
}

int sum(int b[], int n){
	int sum=0;
	for(int i=0; i<n; i++)
		sum += b[i];
	return sum;
}

void fillArray(int a[], int n) { //fill one dimensional array
	for(int i=0; i<n; i++){
		cout << "Enter " << i << ". number" << endl;
		cin >> a[i];
	}
}

