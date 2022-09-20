import java.util.Scanner;

class Program2
{
	public static void Display(int iValue)
	{
		int i = 0;
		for(i = 1; i <= iValue; i++)
		{
			System.out.println(i);
		}
	}
	
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int ino = 0;
		
		System.out.println("Enter Number");
		ino = sobj.nextInt();
		
		Display(ino);
		
	}
}