// program to print 5 times "Marvellous" on screen 

class Demo2 
{
	public static void main(String arg[])
	{
		Demo dobj = new Demo();
		dobj.Display();
	}
}

class Demo 
{
	public void Display()
	{
		int i = 0;
		for(i = 1; i <= 5;i++)
		{
			System.out.println("Marvellous :" +i);
		}
	}
}