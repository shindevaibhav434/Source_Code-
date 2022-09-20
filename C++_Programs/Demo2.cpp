// program to print 5 times marvellous on screen using oops

#include<iostream>
using namespace std;

class Demo 
{
public:

	void Display()
	{
		int i = 0;
		for(i = 1; i <= 5; i++)
		{
			cout<<"Marvellous:"<< <<i<<"\n";
		}
	}
};

int main()
{
	Demo dobj;
	dobj.Display();

	return 0;
}