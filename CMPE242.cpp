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
using namespace std;

#define STACKSIZE 10

struct stack
{
    int top;
    int items[STACKSIZE];
};

void initializeStack(struct stack *ps)
{
    ps->top = -1;
}

int isStackFull(struct stack *ps)
{
    if (ps->top == STACKSIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ps, int x)
{
    if (isStackFull(ps))
    {
        cout << "Stack is full" << endl;
        exit(1);
    }
    ps->top++;
    ps->items[ps->top] = x;
}

int isStackEmpty(struct stack *ps)
{
    if (ps->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(struct stack *ps)
{
    if (isStackEmpty(ps))
    {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    ps->top
    ps->items[(ps->top--)];
}

void printItems(struct stack *ps)
{
    int x;
    struct stack temp;
    initializeStack(&temp);

    while (!isStackEmpty(ps))
    {
        x = pop(ps);
        cout << x << endl;
        push(&temp, x);
    }
    while (!isStackEmpty(&temp))
    {
        x = pop(&temp);
        push(ps, x);
    }
}

int main(void)
{
    struct stack s;
    int element;
    int x;
    initializeStack(&s);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter item: ";
        cin >> x;
        push(&s, x);
    }
    cout << "Elements are:" <<endl;
    printItems(&s);

    element = pop(&s);
    return 0;
}













