#include < stdio.h >

long sum( int num1, int num2);

int main()
{
	int n1;
	int n2;
	int result;	

	scanf("%d", &n1);
	scanf("%d", &n2);

	result = sum(n1 , n2);
	printf("%d", result);
	return 0;
}

long sum( int num1, int num2)
{
	int result=0;
	
	if(num1 > num2)
	{	
		for( num2 ; num2 <= num1 ; num2++ ) 
		{
			result = result + num2;
		}
		return result;
	}
	else if( num2 > num1 )
	{
		for( num1 ; num1 <= num2 ; num1++)	 
		{
			result = result + num1;
		}
		return result;
	}
	else
	{
		return result;
	}	
}