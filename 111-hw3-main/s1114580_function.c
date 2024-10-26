#include <stdio.h>

void tree(int, int, int);  /*生成樹木到指定位置(a, b)*/

int main()
{
	int a, b, c;
	do
	{
		printf("輸入三棵樹的尺寸(a, b, c):\n");
		scanf("%d %d %d", &a, &b, &c);
	}while(a<3 || a>13 || a%2==0 || b<3 || b>13 || b%2==0 || c<2 || c>13 || c%2==0);
	
	printf("\033[2J");  /*代替使用者Ctrl+L*/
	tree(a, 1, 1);
	tree(b, 1, 1+2*(a-1)+1+1);
	tree(c, 1, 1+2*(a-1)+2*(b-1)+1+1+1+1); /*運算生成位置*/
	printf("\033[999;1H");	/*將光標移動到最左下角*/
	return 0;
}

void tree(int n, int a, int b)	/*a b為生成座標點(a, b)*/
{
	int i, j, k;
	printf("\033[%d;%dH", a, b);
	/*樹葉*/
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
	/*樹幹*/		
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


