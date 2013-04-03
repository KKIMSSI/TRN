#include "HexaView.h"

void HexaView(unsigned char *ucP, unsigned int isize)
{
	int iCnt;
	int iloop;
	
	printf("式式式式式式式式式式式式式式式式式式式式"
		"式式式式式式式式式式式式式式式式式\n");

	printf("Address  \t\t\tHexa\t\t\t       ASCII\n"); 
	printf("\t ");

	for(iCnt=0 ; iCnt <= 15 ; iCnt++)
	{
		printf("%02X ", iCnt);
	}

	putchar('\n');

	printf("式式式式式式式式式式式式式式式式式式式式"
	        "式式式式式式式式式式式式式式式式式\n");
	
	if( 0 == isize%16 )
	{
		isize = isize / 16;	
	}
	else
	{
		isize = (isize/16) + 1;		
	}
	
	for(iloop=0; iloop < isize; iloop++)
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
		ucP = ucP + 16;
	}
}

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};

   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}