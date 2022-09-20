import java.util.Scanner;

class program1 
{
	public static void main(String arg[])
	{
		int ino1 = 0, ino2 = 0, iret = 0;
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter first Number ");
		ino1 = sobj.nextInt();
		
		System.out.println("Enter Second Number ");
		ino2 = sobj.nextInt();
		
		Demo dobj = new Demo();
		
		iret = dobj.Addition(ino1,ino2);
		System.out.println("Addition of two numbers is :" + iret);
		
	}
}

class Demo 
{
	int Addition(int iValue1,int iValue2)
	{
		int iSUM = 0;
		iSUM = iValue1 + iValue2;
		return iSUM;
	}
}

