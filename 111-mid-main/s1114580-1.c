#include <stdio.h>
#include <math.h>

int four(double n)
{
	if (n-(int)n>=0.5)
		return (int)n+1;
	else
		return (int)n;
}

float long_free(int n, int km)
{
	if (km<=200)
		return 0;
	switch(n)
        {
                case 1:
                        return 0.3*(km-200);
                        break;
                case 2:
                        return 0;
                        break;
                case 3:
                        return 0.375*(km-200);
                        break;
                case 4:
                        return 0.45*(km-200);
                        break;
	}
}
float change(int n)
{
	switch(n)
	{
		case 1:
			return 1.2;
			break;
		case 2:
			return 1.2;
			break;
		case 3:
			return 1.5;
			break;
		case 4:
			return 1.8;
			break;
	}
}
double basic(int, int);
int main()
{
	int car, pay, km, c=0;
	float count=1.0;
	do
	{
		if (c==0)
		{
			printf("�п�J���ءA1)�p�����A2)�p�{���A3)�j�����A4)�p����:");
			scanf(" %d", &car);
		}
		else
		{
			printf("���~!�Э��s��J����:");
			scanf(" %d", &car);
		}
		c++;	
	}while(car<1 || car>4);
	c=0;
	do
	{
		if (c==0)
		{
			printf("�п�Jú�O�覡�A1)eTag�Τ�A2)�w���Τ�A3)ú�O�Τ�:");
			scanf(" %d", &pay);
		}
		else
		{
			printf("���~!�Э��s��Jú�O�覡:");
			scanf(" %d", &pay);
			c=0;
		}
		c++;
	}while(pay<1 || pay>3);	
	
	printf("�п�J���{��:");
	scanf(" %d", &km);
	if (pay==1)
		count=0.9;	
	printf("�򥻶O��:%lf �C���u�f:%lf ���~�馩:%f �`�q��O:%lf �|�ˤ��J��O��:%d �̫�O��:%d\n", \
	change(car)*km, change(car)*20, long_free(car, km), basic(car, km), four(basic(car, km)), four(count*basic(car, km)));	
	return 0;
}

double basic(int n, int km)
{
	switch(n)
 	{
		case 1:
			if (km>20)
				if (km>200)
					return(1.2*180+0.9*(km-200));
				else
					return(1.2*(km-20));
			else
				return 0;
			break;
		case 2:
			return 1.2*km;
			break;
		case 3:
			if (km>20)
                                if (km>200)
                                        return(1.5*180+1.125*(km-200));
                                else
                                        return(1.5*(km-20));		
			else
				return 0;
			break;
		case 4:
			if (km>20)
                                if (km>200)
                                        return(1.8*180+1.35*(km-200));
                                else
                                        return(1.8*(km-20));
                        else
                                return 0;
			break; 
	}	
}





