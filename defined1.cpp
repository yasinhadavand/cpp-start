#include <iostream>
#include <cmath>

using namespace std;

double y(int x,int y);
double f(int x,int y, int z);

int main(void){
	int x,y,z;
	cout<<"please enter value of x , y , z: "<<endl;
	cin>>x>>y>>z;
	cout<<"Result is : "<<y;
}
double y(int x, int y){
	return 2*pow(x,y) + sqrt(y);
}
//double f(int x,int y,int z){
//	z*exp(x) / log(exp(2*y/z));
//}