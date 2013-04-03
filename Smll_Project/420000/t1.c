char flstz[] = "1111222233334444";
int sum=0x78563412;

test ()
{
	int i;
	
	sum = 0x12345678;
	for (i = 0; i < sizeof(flstz)-1; i++)
	{
		flstz[i] = 'a';
	}
}