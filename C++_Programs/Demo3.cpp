// Accept one from user and check whether it is divisible by 5 or not 

#include<iostream>
using namespace std;

bool Check(int iNo)
{
	if((iNo % 5) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = 0;

	cout<<"Enter Number";
	cin>>iValue;

	bRet = Check(iValue);
	if(bRet == true)
	{
		cout<<"It is divisible by 5";
	}
	else 
	{
		cout<<"it is not divisible by 5";
	}

	return 0;
}