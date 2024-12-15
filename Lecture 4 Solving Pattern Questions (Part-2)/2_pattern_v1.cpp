#include<iostream>
using namespace std;
int main()
{
 
int num;
cout<<"Enter the number"<<endl;
cin>>num; 

int n = num;
while (n>0)
{
    int j = num;
   while (j>0)
   {
    cout<<j<<" ";
    j--;
   }
   
   cout<<endl;
   n--;
}

return 0;
}