#include<iostream>
using namespace std;
int main()
{
 
cout<<"Enter number : ";
int n;
cin>>n;

int  i =  2;

while (i<=n)
{
   int j =i-1 ;

   while (j>=1)
   {
    cout<<j<<" ";
    j = j-1;

   }

   cout<<endl;
   i  = i+1;

    
}
 
return 0; 
}