#include<iostream>
using namespace std;
int main()
{
 
 int num = 5;

 cout<<"num is "<<num<<endl;

 // adress of Oprater = &

 cout<<"Adress of num is "<<&num<<endl;
 
int *ptr = &num;


 cout<<"Value of *ptr is "<<*ptr<<endl;

 cout<<"Value of ptr is "<<ptr<<endl;
double d = 4.56;
double *p2 = &d;


 cout<<"Adress of d is "<<p2<<endl;
 cout<<"Value of d is "<<*p2<<endl;



 cout<<"size of integer is "<<sizeof(num)<<endl;
 cout<<"size of pointer is "<<sizeof(ptr)<<endl;
 cout<<"size of pointer 2 is "<<sizeof(p2)<<endl;
return 0;
}