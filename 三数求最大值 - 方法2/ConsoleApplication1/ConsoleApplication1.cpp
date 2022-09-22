#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a, b, c, d,i;
	scanf_s("%d,%d,%d", &a,& b,& c);
			i= max(a, b);
			d = max(i, c);
	printf("max=%d\n", d);
	return 0;
}
int max(int x, int y)
{
	int e;
	if (x > y )e = x;
	else e = y;
	return(e);
}