// display numbers

#include<iostream>
using namespace std;

void Display(int);

int main()
{
	int ino = 0;
	cout<<"Enter Number \n";
	cin>>ino;
	
	Display(ino);
	
	return 0;
}

void Display(int iValue)
{
	int i = 0;
	for(i = 1; i <= iValue; i++)
	{
		cout<<i<<"\n";
	}
}