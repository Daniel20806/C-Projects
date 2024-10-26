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
			printf("請輸入車種，1)小型車，2)計程車，3)大型車，4)聯結車:");
			scanf(" %d", &car);
		}
		else
		{
			printf("錯誤!請重新輸入車種:");
			scanf(" %d", &car);
		}
		c++;	
	}while(car<1 || car>4);
	c=0;
	do
	{
		if (c==0)
		{
			printf("請輸入繳費方式，1)eTag用戶，2)預約用戶，3)繳費用戶:");
			scanf(" %d", &pay);
		}
		else
		{
			printf("錯誤!請重新輸入繳費方式:");
			scanf(" %d", &pay);
			c=0;
		}
		c++;
	}while(pay<1 || pay>3);	
	
	printf("請輸入里程數:");
	scanf(" %d", &km);
	if (pay==1)
		count=0.9;	
	printf("基本費用:%lf 每日優惠:%lf 長途折扣:%f 總通行費:%lf 四捨五入後費用:%d 最後費用:%d\n", \
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





