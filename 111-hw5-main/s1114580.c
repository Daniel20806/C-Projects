#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verify(char a[]);
int convert_x(int, char a);
int convert_y(int, char a);
int count_x(char a[]);
int count_y(char a[]);

int main()
{
	int i, c=0, check;
	char str[15];
	do
	{
		do
		{
			if(c!=0 && verify(str)==-1)
				printf("暫時不支持離島地區!");
			else if ((c!=0 && verify(str)==0) || strlen(str)==10 || strlen(str)>11)
				printf("輸入錯誤!");
			printf("請輸入電力座標:");
			scanf("%s", str);
			for (i=0;i<strlen(str);i++)
                        	str[i]=toupper(str[i]);
			c++;
		}while(verify(str)==-1 || verify(str)==0 || strlen(str)==10 || strlen(str)>11);		
		c=0;
		printf("T67二度分帶座標為- X:%d、Y:%d\n", count_x(str), count_y(str));
		printf("\n繼續查詢輸入1, 離開輸入0:");
		scanf("%d", &check);
	}while(check);
	return 0;
}

int verify(char a[])
{
	int c=0;
	if (a[0]>=65 && a[0]<=90)
		if (a[0]==83 || a[0]==90)
			return -1;
		else 
			c++;
	if ((a[1]>=48 && a[1]<=57) && (a[2]>=48 && a[2]<=57) && (a[3]>=48 && a[3]<=57) && (a[4]>=48 && a[4]<=57)) 			c++;
	if (a[5]>=65 && a[5]<=72)
		c++;
	if (a[6]>=65 && a[6]<=69)
		c++;
	if ((a[7]>=48 && a[7]<=57) && (a[8]>=48 && a[8]<=57))
		c++;
	if (strlen(a)==10)
		if (!(a[9]>=48 && a[9]<=57))
			c--;
	if (strlen(a)==11)
		if (!((a[9]>=48 && a[9]<=57) && (a[9]>=48 && a[9]<=57)))
			c--;

	if (c==5)
		return 1;
	else
		return 0;				
}

int convert_x(int n, char a)
{
	switch (n)
	{
		case 0:
			if (a=='J' || a=='M' || a=='P')
				return 90000;
			else if (a=='A' || a=='D' || a=='G' || a=='K' || a=='N' || a=='Q' || a=='T' || a=='V')
				return 170000;
			else if (a=='B' || a=='E' || a=='H' || a=='L' || a=='O' || a=='R' || a=='U' || a=='W')
				return 250000;
			else if (a=='C' || a=='F')
                                return 330000;
			else if (a=='X')
				return 275000;
			else if (a=='Y')
				return 275000;
			break;
		case 5:
			return (a-65)*100;
			break; 
		default:
			return a-48;	
	}	
}

int convert_y(int n, char a)
{
        switch (n)
        {
                case 0:
                        if (a=='A' || a=='B' || a=='C')
				return 2750000;
			else if (a=='D' || a=='E' || a=='F')
                                return 2700000;
			else if (a=='G' || a=='H')
                                return 2650000;
			else if (a=='J' || a=='K' || a=='L')
                                return 2600000;
			else if (a=='M' || a=='N' || a=='O')
                                return 2550000;
			else if (a=='P' || a=='Q' || a=='R')
                                return 2500000;
			else if (a=='T' || a=='U')
                                return 2450000;
			else if (a=='V' || a=='W')
                                return 2400000;
			else if (a=='X')
				return 2614000;
			else if (a=='Y')
				return 2564000;
			break;
                case 6:
                        return (a-65)*100;
                        break;
                default:
                        return a-48;
        }
}


int count_x(char a[])
{
	int total=0;
 	total+=convert_x(0, a[0])+((convert_x(1, a[1])*10)+convert_x(2, a[2]))*800+convert_x(5, a[5])+convert_x(7, a[7])*10;
	if (strlen(a)>=10)
		total+=convert_x(9, a[9]);	
	return total;
}

int count_y(char a[])
{
        int total=0;
        total+=convert_y(0, a[0])+((convert_y(3, a[3])*10)+convert_y(4, a[4]))*500+convert_y(6, a[6])+convert_y(8, a[8])*10;
        if (strlen(a)>=10)
                total+=convert_y(10, a[10]);
        return total;
}
