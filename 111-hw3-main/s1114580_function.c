#include <stdio.h>

void tree(int, int, int);  /*�ͦ�������w��m(a, b)*/

int main()
{
	int a, b, c;
	do
	{
		printf("��J�T�ʾ𪺤ؤo(a, b, c):\n");
		scanf("%d %d %d", &a, &b, &c);
	}while(a<3 || a>13 || a%2==0 || b<3 || b>13 || b%2==0 || c<2 || c>13 || c%2==0);
	
	printf("\033[2J");  /*�N���ϥΪ�Ctrl+L*/
	tree(a, 1, 1);
	tree(b, 1, 1+2*(a-1)+1+1);
	tree(c, 1, 1+2*(a-1)+2*(b-1)+1+1+1+1); /*�B��ͦ���m*/
	printf("\033[999;1H");	/*�N���в��ʨ�̥��U��*/
	return 0;
}

void tree(int n, int a, int b)	/*a b���ͦ��y���I(a, b)*/
{
	int i, j, k;
	printf("\033[%d;%dH", a, b);
	/*��*/
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1-i;j++)
			printf("\033[1m-\033[0m");
		for (j=0;j<1+2*i;j++)
			printf("\033[32m*\033[0m");
		for (j=0;j<n-1-i;j++)
			printf("\033[1m-\033[0m");
		printf("\033[%d;%dH", a+1+i, b);
	}
	/*��F*/		
	for (k=0;k<(n-1)/2;k++)
        {
                for (j=0;j<n-1;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1;j++)
                        printf("\033[38;2;102;51;0m*\033[0m");
                for (j=0;j<n-1;j++)
                        printf("\033[1m-\033[0m");
		i++;		
                printf("\033[%d;%dH", a+i, b);
        }

}


