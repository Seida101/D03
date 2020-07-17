#include <unistd.h>
#include <stdio.h>
void ft_ultimate_ft(int *********snbr)
{
	int j= 42;
	int *s1;
	int **s2;
	int ***s3;
	int ****s4;
	int *****s5;
	int ******s6;
	int *******s7;
	int ********s8;
	
	s1 = &j;
	s2 = &s1;
	s3 = &s2;
	s4 = &s3;
	s5 = &s4;
	s6 = &s5;
	s7 = &s6;
	s8 = &s7;

	snbr = &s8;
}
