#include<iostream>
using namespace std; //apply prefix "std::". It allows us to use cout in place of std::cout. 
int main(void)
{
	int n;
	cout<<"Enter a character";
	cin>>n;
	cout<<"i="<<n<<endl; 
               //output stream endl-> end-of-line ("\n")
	cout<<"Address of i is "<<&n<<endl;
	return 0; //optional, some compilers except it to be included as the last line of the main() function. 
}

