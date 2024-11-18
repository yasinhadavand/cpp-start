#include<iostream>
#define size 3
using namespace std;

int main(void){
    struct q2
    {
        int age;
        char name[20];
    }add[size];

    for (int i = 0; i  < size ; i++)
    {
        cout<<"Enter name "<<i+1<<" student";
        cin>>add[i].name;
        cout<<"Enter age "<<i+1<<" Student";
        cin>>add[i].age;
    };

    for (int i = 0; i < size ; i++)
    
        cout<<endl<<add[i].name<<"\t"<<add[i].age;

        return 0;
    
    
}