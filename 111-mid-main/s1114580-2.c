#include <stdio.h>

double n_(int);

int main()
{
	int c, t=0;
	float i;
	double total;
	do
	{
		if (t!=0)
			printf("��J���~!");
		printf("�п�J�@�Ӿ��:");
		scanf("%f", &i);
		t++;	
	}while(i<0 || (i-(int)i)!=0);
	
	for (c=1;c<=i;c++)
		total+=1.0/n_(c);	
	printf("Result: %.30lf\n", total);
	return 0;
}

double n_(int n)
{
	double c;
	c=n;
	if (c<1)
		return 1;
	else
		return c*n_(c-1);
}
