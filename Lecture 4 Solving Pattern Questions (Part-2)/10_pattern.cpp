#include<iostream>
using namespace std;
int main()
{
 
int n;
cout<<"Enter the number"<<endl;
cin>>n; 

int i = 1;
int count = 0;

while (i<=n)
{
    int j = 1;
    
   while (j<=i)
   {
    
    
    char ch = 'A'+ count;
    

    cout<<ch<<" ";

    j = j+1;
    
   }

   count = count + 1;

   i = i+1;
   cout<<endl; 
   

 
}

return 0;
}