#include <iostream>
using namespace std;

int main(void){
    int num[10],i;
    for (int i = 0; i < 10 ; i++)
    {
        /* code */
        cout<<"enter number "<<i+1<<" : ";
        cin>>num[i];
    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        sum = sum + num[i];

    }
    cout<<sum;
    
}