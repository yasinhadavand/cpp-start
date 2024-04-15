#include <iostream>
#define SIZE 3
using namespace std;

int main(void){
    struct q2
    {
        int age;
        char name[20];
    }s[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout<<"Enter age student "<<i+1<<" :";
        cin>>s[i].age;
        cout<<"Enter name sudent "<<i+1<<" :";
        cin>>s[i].name;

    }
    for (int i = 0; i < SIZE; i++)
    
        cout<<s[i].name <<"\t"<<s[i].age<<endl;
    
    
    return 0;
    
}