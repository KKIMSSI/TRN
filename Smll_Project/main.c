#include < stdio.h >
#include "HexaView.h"

int main()
{
	char array[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
		                 ,'Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6',}; 
	
	unsigned char *ucP = (unsigned char*)array;

	printf("주소를 입력하세요 : ");

	scanf("%X", &ucP);	
	
	HexaView(ucP, 300);

	
	return 0;
}


/*int main()
{
	char array[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
		                 ,'Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6'};
	char temp;
	int iCnt;
	int iCnt3 = 1;
	unsigned char *ucP = (unsigned char*)array;
	//unsigned char *ucP = (unsigned char*)(&temp);
	printf("--------------------------------------"
		"-----------------------------------\n");
	printf(" Address  \t\t\tHexa\t\t\t      ASCII\n");
	printf("\t ");

	
	for(iCnt=0 ; iCnt <= 15 ; iCnt++)
	{
		printf("%02X ", iCnt);
	}
	putchar('\n');

	printf("--------------------------------------"
		"-----------------------------------\n");

	
	while(iCnt3 <= 2) 
	{
		printf("%08X ", ucP); 
	
		for( iCnt=0 ; iCnt <= 15 ; iCnt++)
		{
			printf("%02X ", *(ucP+iCnt));
		}

		for( iCnt=0 ; iCnt <= 15 ; iCnt++ )
		{
			if(0 == *(ucP+iCnt))
			{
				printf(".");
			}
			else if( 32 > *(ucP+iCnt))
			{
				printf(".");
			}
			else if( 127 < *(ucP+iCnt))
			{
				printf(".");			
			}
			else
			{
				printf("%c", *(ucP+iCnt)); 
			}
		}
			
		putchar('\n');
		ucP = (ucP + 16);
		iCnt3++;
	}
	return 0;
}*/
