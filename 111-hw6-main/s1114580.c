#include <stdio.h>
#include <string.h>

void rabbits(int);
void add(char a[], char b[]);

int main()
{
	int i, n;

	do
	{
		printf("Please input the number of\
 generations(1-500):\n");
		scanf("%d", &n);
	}while(n<1 || n>500);
	
	rabbits(n);
	return 0;
}

void rabbits(int n)
{
	int i;
	char a[1000]="1", b[1000]="1";
		
	
	for (i=1;i<=n;i++)
	{
		switch(i)
        	{
                	case 1:
				printf("材001计秖:1\n");
                        	break;
                	case 2:
                        	printf("材002计秖:1\n");
				break;
                	default:
                        	if (i%2!=0)
				{
					add(a, b);
					printf("材%03d计秖:%s\n", i, a+1);
				}
				else
				{
					add(b, a);
					printf("材%03d计秖:%s\n", i, b+1);
				}
        	}		
	}
}

void add(char a[], char b[])
{
	int c=0, t, i=strlen(a), j=strlen(b);
		
	while (i>=1 && j>=1)
	{
		t=a[i-1]+b[j-1]-96;
		if (t/10==0)
		{
			if (t+c==10)
			{
				a[i]=48;
				c=1;
			}
			else
			{
				a[i]=t+c+48;
				c=0;
			}
		}
		else
		{
			if (t==10)
				a[i]=48+c;
			else
				a[i]=(t%10)+c+48;
			c=t/10;
		}
		i--;		
		j--;
	}
	if (strlen(b)<2)
		a[0]=c+48;
	else
		if (c!=0)
			a[0]=(b[0]-48)+c+48;	
		else
			a[0]=48;
	if (a[1]==48)
		for (i=1;i<=strlen(a);i++)
			a[i-1]=a[i];
}
