#include < stdio.h >
#include < math.h >

int caculate( char operation, int num1, int num2);

int main()
{
	int n1;
	int n2;
	int result;
	char o;
	
	printf("��������ڸ� �����ϼ��� : ");
	scanf("%c", &o);
	printf("�ΰ��� �ǿ����ڸ� �Է��ϼ��� : ");
	scanf("%d", &n1);	
	scanf("%d", &n2);
	

	result = caculate(o, n1, n2);
	printf("%d", result);
	return 0;
}



int caculate( char operation, int num1, int num2)
{	
	int r;

	switch(operation)
	{	
		case '+' :
			r = num1 + num2;
			return r;
			break;
		case '-' :
			r = num1 - num2;			
			return r;
			break;
		case '*' :
			r = num1 * num2;
			return r;
			break;
		case '/' :
			r = num1 / num2;
			return r;
			break;
		default :
			r = (int)NULL;
			return r;
			break;			
	}
}
