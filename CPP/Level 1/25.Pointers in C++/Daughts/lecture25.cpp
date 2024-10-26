#include<iostream>
using namespace std;
int main()
{
int i = 5;


// Acess i with pointer Method 1
int *p = &i;
cout<<"*p : "<<*p<<endl; 
cout<<"p : "<<p<<endl; 

//Acress i with pointer Method 2

int *q = 0;//optional you just have to creat a pointer
q = &i;
cout<<"*q : "<<*q<<endl; 
cout<<"q : "<<q<<endl; 

//experiment 1

int *w;
w = &i;
cout<<"*w: "<<*w<<endl; 
cout<<"w: "<<w<<endl; 

//copy pointer
int *s=p;//this is copy pointer


cout<<"Copy pointer s value: "<<*s<<endl;
cout<<"Copy pointer s address: "<<s<<endl;

//Arithmatic oprations with pointers
//Method 1(A)
(*p)++;
cout<<"*q : "<<*q<<endl; 
//Method 1(B)
cout<<"*q : "<< (*p)++ <<endl; 

//Method 2
*p = *p + 1;
cout<<"*p : "<<*p<<endl; //Daught

// imp concept
cout<<"p : "<<p<<endl; 
p = p +1;
cout<<"p : "<<p<<endl; 

 
return 0;
}