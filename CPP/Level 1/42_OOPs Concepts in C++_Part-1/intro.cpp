#include<iostream>
using namespace std;
// This is a class
class Hero {
// Below are the Properties of the class.

public:
int Health;
char Atribute[0 ];
}; 
int main()
{
 //Creation of object through class.

 Hero Animesh;

 //cout<<"Size of Animesh is "<<sizeof(Animesh)<<endl;

cout<<"Health is:"<<Animesh.Health<<endl; 
cout<<"Atribute is:"<<Animesh.Atribute<<endl; 
 
 
return 0;
}