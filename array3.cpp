#include <iostream>
using namespace std;

int main(void){
    int count[10],i,number;
    cout<<"How many number you want to sum ? ";
    cin>>number;
    for (int i = 0; i < number ; i++)
    {
        /* code */
        cout<<"enter number "<<i+1<<" : ";
        cin>>count[i];
    }
    int sum=0;
    for (int i = 0; i < number; i++)
    {
        /* code */
        sum = sum + count[i];

    }
    cout<<sum;
    
}