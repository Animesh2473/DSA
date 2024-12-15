#include<iostream>
using namespace std;
int main()
{
 
int num;
cout<<"Enter the number"<<endl;
cin>>num; 

int n = 1;
while (n<=num)
{
    int j = 1;
   while (j<=num)
   {
    cout<<num-j+1<<" ";
    j++;
   }
   
   cout<<endl;
   n++;
}

return 0;
}