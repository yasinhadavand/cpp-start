// #include <iostream>
// #define SIZE 3
// using namespace std;

// int main(void){
//     struct q2
//     {
//         int age;
//         char name[20];
//     }s[SIZE];

//     for (int i = 0; i < SIZE; i++)
//     {
//         cout<<"Enter age student "<<i+1<<" :";
//         cin>>s[i].age;
//         cout<<"Enter name sudent "<<i+1<<" :";
//         cin>>s[i].name;

//     }
//     for (int i = 0; i < SIZE; i++)
    
//         cout<<s[i].name <<"\t"<<s[i].age<<endl;
    
//     return 0;
    
// }
#include <iostream>
#define STACKSIZE 100

struct stack
{
    int top;
    int items[STACKSIZE];
};
void initializeStack (struct stack *ps){
    ps->top = -1;
}
int stackIsFull(struct stack *ps){
    if(ps->top = STACKSIZE - 1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *ps, int x){
    if (stackIsFull (ps))
    {
        cout<<"is full";
        exit(1);
    }
    ps->top ++;
    ps->items[ps->top]=x
    
}

int main(void){
    struct stack s;
    return 0 ;
    initializeStack(&s);
}













