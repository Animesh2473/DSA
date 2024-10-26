#include<iostream>
using namespace std;
int main()
{
  
int i =5;
//pointer to int is created ,and pointing towards some  garbage "adress"

// int *p=0;

// cout<<*p<<endl;

// int *q=&i;

// cout<<q<<endl;
// cout<<*q<<endl;


// //int *p = &i;

// int *p = 0;
// p = &i;

// cout<<p<<endl;
// cout<<*p<<endl;
int num = 5;

int a = num;

a++;

cout<<a<<endl;

int *p = &num;
cout<<"before :"<<num<<endl;
(*p)++;

cout<<"After: "<<num<<endl;

int *q = p;

//coping a pointer
cout<<q<<"--"<<p<<endl;
cout<<*q<<"--"<<*p<<endl;


//important concept
int *t = &i;
*t = *t +1;
cout<<*t<<endl;

cout<<"Before t "<<t<<endl;
t = t+1;
cout<<"After t+1 "<<t<<endl;
cout<<t<<endl;








return 0;
}