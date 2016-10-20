#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int sum(int x, int y)
{
	return (x + y);
}
int mult(int x, int y)
{
	return (x*y);
}
int dev(int x, int y)
{
	return(x / y);
}
int pow(int x, int y)
{
	int p = 1, i;
	for (i = 1; i <= y; i++) 
	{
		p = p*x;
	}
	return(p);
}
int sub(int x, int y)
{
	return(x - y); 
}
unsigned sqrt(double xL)
{
	unsigned div = 1, rslt = 0;
	while (x > 0)
	{
		x -= div, div += 2;
		rslt += x < 0 ? 0 : 1;
	}
	return rslt;
}



int main()
{
	int a, b, r, r2, r3,r4, r5;
	printf("a="); scanf_s("%d", &a);
	printf("b="); scanf_s("%d", &b);
	double r6;
	r = sum(a, b);   printf("r=%d", r);
	r2 = mult(a, b); printf("\nr2=%d", r2);
	r3 = dev(a, b);  printf("\nr3=%d", r3);
	r4 = pow(a,b);    printf("\nr4=%d", r4); 
	r5 = sub(a, b);  printf("\nr5=%d", r5);
	r6 = sqrt(a);   printf("\nr6=%f", r6);
	_getch();
}