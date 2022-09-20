#include<iostream>
using namespace std;

class Add1
{
	public:
	
	int Addition(int iValue1,int iValue2)
	{
		int iSUM = 0;
		iSUM = iValue1 + iValue2;
		return iSUM;
	}
	
};

int main()
{
	int ino1 = 0, ino2 = 0, iret = 0;
	
	cout<<"Enter first Number \n";
	cin>>ino1;
	
	cout<<"Enter Second Number \n";
	cin>>ino2;
	
	Add1 aobj;
	iret = aobj.Addition(ino1,ino2);
	
	cout<<"Addition of two Numbers is : "<<iret<<"\n";
	
	return 0;
	
}