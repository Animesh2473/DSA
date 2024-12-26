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
    
   while (j<=n)
   {
    
    
    char ch = 'A'+ count;
    count = count + 1;

    cout<<ch<<" ";

    j = j+1;
    
   }



   i = i+1;
   cout<<endl; 
   

 
}

return 0;
}