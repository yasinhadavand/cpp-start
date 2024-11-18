#include<iostream>
using namespace std;
void fanction1 (int *,int *,int *);

int main(void){
    int a=1,b=2,c=3,x,y;
    x=a+b;
    y=a+c;
    cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
    cout<<"x="<<x<<"y="<<y<<endl;
    fanction1(&a,&b,&c);
    cout<<a<<b<<c;
    //    4  3  5
}
void fanction1 (int *x, int *y, int *z){
    int t;
    t=*z;
    *z+=*y;
    *y+=*x;
    *x+=t;
}