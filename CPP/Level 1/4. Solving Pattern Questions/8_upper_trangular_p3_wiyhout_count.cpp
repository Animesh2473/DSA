#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number : ";
cin>>n;

int i=1;

while (i<=n)
{

int j=1;
while (j<=2*i-1){

cout<<j<<" "<<endl;
j = j+1;

}

cout<<endl;
i = i+1;
}
 
return 0;
}