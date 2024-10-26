#include <stdio.h>
#include <stdlib.h>

int verify(char ch[]);
int convert(int, char);

int main()
{
	int i, j, total=0;
	char ch[12];
	printf("請輸入中華民國居留證: \n");
	scanf("%s", ch);

	while (verify(ch))
	{
		total+=(convert(0, ch[0])/10)*1+((convert(0, ch[0])%10)*9)%10 \
		+(convert(1, ch[1])*8)%10+(convert(2, ch[2])*7)%10+(convert(3, ch[3])*6)%10 \
		+(convert(4, ch[4])*5)%10+(convert(5, ch[5])*4)%10+(convert(6, ch[6])*3)%10 \
		+(convert(7, ch[7])*2)%10+(convert(8, ch[8])*1)%10+(convert(9, ch[9])*1)%10;		
	
		if ((total%10)==0)
		{
			printf("此證件為合法之統一證號!\n");
			break;
		}
		else
		{
			printf("此統一證件不為真!\n");		
			break;
		}
	}
	
	return 0;
}

int verify(char ch[])
{
	int i, c=0;
	if ((ch[0]>=48 && ch[0]<=57) || ch[1]<65 \
	|| ch[1]>68)
	{
		if ((ch[0]>=48 && ch[0]<=57) || (ch[1]>=48 && ch[1]<=57))
		{
			printf("輸入錯誤，前兩碼必須為英文字母!\n");
			return 0;			
		}
		else
		{
			printf("輸入錯誤，第二碼必須為A, B, C, D!\n");
			return 0;
		}
	}
	for (i=2;i<10;i++)
	{
		if (ch[i]>=48 && ch[i]<=57)
			continue;
		else
			c++;
	}
	if (c==0)
		return 1;
	else
	{
		printf("輸入錯誤，末八碼必須是0~9!\n");
		return 0;
	}
}

int convert(int n, char a)
{
	switch (n)
	{
		case 0:
			if (a>=65 && a<=72)
				return a-55;
			else if (a>=74 && a<=78)
				return a-56;
			else if (a>=80 && a<=86)
				return a-57;
			else if (a==88 || a==89)
				return a-58;
			else if (a=='W')
				return 32;
			else if (a=='Z')
				return 33;
			else if (a=='I')
				return 34;
			else if (a=='O')
				return 35;
			break;
		case 1:
			if (a=='A')
				return 0;
			else if (a=='B')
				return 1;
			else if (a=='C')
				return 2;
			else if (a=='D')
				return 3;
			break;
		default:
			return a-48;	
	}	
}
