
public class newclass
{
	public static void main()
	{
		int a = 10;
		int b = 10;							// b = 10
		int c = 10;
		int i = 0;
	
		if (i <= 5)
		{
			int i = 10;						// Redeclaration
			if (i >= 5)						// Nested if
			{
				i = i + 1;					// i value = 11
			}
		}
		while (a == 5)						// While
		{
			a = a + 5;						
			do								// Do while - Nested
			{
				a = a + 5;					// a = 20
				int j = 0;
				for (j = 1; j < 10; j += 1)	// Nested for
				{
					if (c > 5)				// Nested if
					{	
						c = c + 1;			// c = 11
					}
				}
			} while (b == 5);
		}
		for (;;)							// Empty for
		{	

		}
	}
}
/*
public class newclass
{
	public static void main(String []args)
	{
		int c = 0;
		int b = 5;
		int j;
		for(int a=20;a<25;a++)
		{
		    b=15;
		}
		int k=3*a;
		while(c<5)
		{
			j=1;
		}
	}
}*/