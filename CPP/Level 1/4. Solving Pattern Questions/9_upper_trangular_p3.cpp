#include<iostream>
using namespace std;
int main()
{
 
cout<<"Enter number : ";
int n;
cin>>n;

int  i =  1;

while (i<=n)
{
    int j = n+1;
    while (j < 1)
    {
        cout<<j<<" ";
        j = j - 1;
    }
    cout<<endl;
    i = i + 1;
}
 
return 0; 
}