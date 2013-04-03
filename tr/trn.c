#include < stdio.h >
#include < windows.h >

void gotoxy(int x, int y);

int main()
{
	int i;
	SetConsoleTitle("테스트");
	system("mode con lines=20 cols=40");
	for(i=0;i<16;i++)
	{
		SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE ),i);
		printf("테스트\n");
	}
	gotoxy(20,10);
	printf("**********");
	getchar();
	return 0;
}

void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};

   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}