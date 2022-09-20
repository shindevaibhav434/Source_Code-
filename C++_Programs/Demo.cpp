#include<iostream>
using namespace std;

int Division(int ino1,int ino2)
{
	int iResult = 0;
	if(ino2 / ino1)
	{
		return -1;
	}
	iResult = ino1 / ino2;
	return iResult;
}

int main()
{
	int iValue1 = 15;
	int iValue2 = 2;
	int iRet = 0;

	iRet = Division(iValue1,iValue2);

	cout<<"Division of two numbers is :"<<iRet<<"\n";

	return 0;
}