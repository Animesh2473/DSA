#include<iostream>
using namespace std;

//Hold
void printArray(int arr[],int size){

    
    for (int i = 0; i < size; i++)
    {
    cout << arr[i] << " ";
    }
    cout<<"Printing DONE"<<endl;

}

int main()
{

//declaration of an array

cout<<"Array 1"<<endl;

int number[15];
// Accesing an element
cout<<"Value at 1 index is "<<number[0]<<endl;
cout<<"Value at 2 index is "<<number[1]<<endl;
cout<<"Value at 15 index is "<<number[14]<<endl;
//using functions
printArray(third, 15);

//Acesing more than an index of an array
cout<<"Value at 16 index is "<<number[15]<<endl;
cout<<"Value at 19 index is "<<number[20]<<endl;
cout<<"Value at 20 index is "<<number[21]<<endl;

 
cout<<"Array 2"<<endl;

int secand[3]={10,11,12};

cout<<"Value at 1 index is "<<secand[0]<<endl;
cout<<"Value at 2 index is "<<secand[1]<<endl;
cout<<"Value at 3 index is "<<secand[2]<<endl;


cout<<"Array 3"<<endl;

int third[15] = {2,7};
cout<<"Value at 1 index is "<<third[0]<<endl;
cout<<"Value at 2 index is "<<third[1]<<endl;


cout<<""<<endl;

cout<<"Loop starts"<<endl;

int n=20;

for (int i = 0; i < n; i++)
{
    
cout<<"Value at "<<i +1<<" index is "<<third[i]<<endl;
}
 

cout<<"Everything is fine "<<endl;
return 0;
}