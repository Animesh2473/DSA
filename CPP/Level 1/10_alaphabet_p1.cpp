#include<iostream>
using namespace std;
int main()
{

cout<<"Enter number : ";
int n;
cin>>n;
int i =1;

while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        if (i = 1)
        {
           cout<<"A"<<" "; 
        }
        else if (i = 2)
        {
           cout<<"B"<<" "; 
        }
        else if (i = 3)
        {
           cout<<"C"<<" "; 
        }
       
        
    }
    cout<<endl;
    i = i+1;
}


 
return 0;
}