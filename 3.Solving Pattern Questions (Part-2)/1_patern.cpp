#include<iostream>
using namespace std;
int main()
{
 
int num;
cout<<"Enter the number"<<endl;
cin>>num; 

int n = 0;
while (n<=num)
{
    int j = 0;
   while (j<=num)
   {
    cout<<j<<" ";
    j++;
   }
   
   cout<<endl;
   n++;
}

return 0;
}