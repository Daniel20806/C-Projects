#include <stdio.h>

void add(int, int, int);
int C(int, int);
int n_(int);
int sq(int, int);

int main()
{
	int a, b, n, count=0;
	do
	{
		if (count)
			printf("Error!");
		printf("Please input the value of a:");
        	scanf(" %d", &a);
		count++;
	}while(a<=0);
	count=0;
	do
	{
		if (count)
			printf("Error!");
		printf("Please input the value of b:");
		scanf(" %d", &b);
		count++;
	}while(b<=0);
	count=0;
	do
	{
		if (count)
                        printf("Error!");
		printf("Please input the value of n:");
        	scanf(" %d", &n); 
		count++;
	}while(n<=0);
	//printf("%d\n", C(5, 0));	
	add(a, b, n);
	
	return 0;
}

void add(int a, int b, int n)
{
	int i, v=0, c=n, total=0;
	printf("(%d+%d)^%d=", a, b, n);
	for (i=0;i<=n;i++)
	{
		total+=C(n, i)*sq(a, c)*sq(b, i);	
		if (C(n, i)!=1)
		{
			printf("%d", C(n, i));
			v++;							
		}
		if (c==1)
		{
			if (C(n, i)!=1)
				printf("*");
			printf("%d", a);
			v++;
		}
		else if (c!=1 && c!=0)
		{
			if (C(n, i)!=1)
                                printf("*");
			printf("%d^%d", a, c);
			v++;
		}
		if (i==1)
                {
			if (v)
				printf("*");
                        printf("%d", b);
                }
                else if (i!=1 && i!=0)
                {
			if (v)
				printf("*");
                        printf("%d^%d", b, i);
                }
		if (i!=n)
			printf("+");	
		--c;
		v=0;
	}
	printf("=%d\n", total);
}

int C(int n, int a)
{
	return n_(n)/n_(n-a)/n_(n-(n-a));	
}

int n_(int n)
{
	if (n<1)
		return 1;
	else
		return n*(n_(n-1));		
}

int sq(int a, int n)
{
	int i, total=1;
	for (i=0;i<n;i++)
		total*=a;
	return total;
}

