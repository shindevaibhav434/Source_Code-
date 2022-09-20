// Division of two numbers 

class Demo1 
{
	public static int Division(int iNo1,int iNo2)
	{
		int iRes = 0;

	//	if(iNo2 / iNo1)
	//	{
	//		return -1;
	//	}

		iRes = iNo1 / iNo2;
		return iRes;

	}

	public static void main(String arg[])
	{
		int iValue1 = 15;
		int iValue2 = 2;
		int iAns = 0;

		iAns = Division(iValue1,iValue2);

		System.out.println("Division of two numbers is :" +iAns);

	}
}