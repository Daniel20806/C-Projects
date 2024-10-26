#include <stdio.h>

void tree(int, int);

int main()
{
	int i, j, a, b, c;
	do
	{
		printf("¿é¤J¤T´Ê¾ðªº¤Ø¤o(a, b, c):\n");
		scanf("%d %d %d", &a, &b, &c);		
	}while(a<3 || a>13 || a%2==0 || b<3 || b>13 || b%2==0 || c<2 || c>13 || c%2==0);	
	
	if (a>=b && a>=c)
		j=a;
	else if (b>=a && b>=c)
		j=b;
	else
		j=c;
	for (i=1;i<=j+(j-1)/2;i++)
	{
		tree(a, i);
		tree(b, i);
		tree(c, i);
		printf("\n");
	}	

	return 0;
}

void tree(int n, int x)
{
	int i;
	if (x<=n)
	{
		for (i=0;i<n-x;i++)
			printf("\033[1m-\033[0m");
		for (i=0;i<2*x-1;i++)
			printf("\033[32m*\033[0m");
		for (i=0;i<n-x;i++)
                        printf("\033[1m-\033[0m");
	}
	else if (x>n && x<=n+(n-1)/2)
	{
		for (i=0;i<n-1;i++)
                        printf("\033[1m-\033[0m");
                for (i=0;i<2*1-1;i++)
                        printf("\033[38;2;102;51;0m*\033[0m");
                for (i=0;i<n-1;i++)
                        printf("\033[1m-\033[0m");
	}
	else
		for (i=0;i<2*(n-1)+1;i++)
			printf(" ");
	printf(" ");
}
