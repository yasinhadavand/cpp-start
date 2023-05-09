#include <iostream>
#include <cmath>

using namespace std;

float calculateaverage(float quiz,float midterm,float final){
	float average = 0.2*quiz + 0.3*midterm + 0.5*final ;
	return average;
}
int main(void){
	float quiz, midterm, final;
	
	cout<<"Enter mark quiz : ";
	cin>>quiz;
	
	cout<<"Enter mark midterm : ";
	cin>>midterm;
	
	cout<<"Enter mark final : ";
	cin>>final;
	
	float average=calculateaverage(quiz,midterm,final);
	
	cout<<"Your average is : "<<average;
	
}