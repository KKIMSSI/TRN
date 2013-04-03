test ()
{
	int s;
	
	s = sum (1, 10);
}

int sum (int from, int to)
{
	int s;

	if (from >= to)
		return 0;
	for (s = 0; from <= to; from++)
		s += from;
	return s;
}