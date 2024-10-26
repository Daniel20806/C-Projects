#include <stdio.h>
#define L 1	/*方便調整生成位置*/

void tree(int);

int main()
{
	int a, b, c;
	do
	{
		/*printf("輸入前請先Ctrl+L整理頁面!\n");*/	/*<---已經沒有必要性*/
		printf("輸入三棵樹的尺寸(a, b, c):\n");
		scanf("%d %d %d", &a, &b, &c);
	}while(a<3 || a>13 || a%2==0 || b<3 || b>13 || b%2==0 || c<2 || c>13 || c%2==0);
	int i, j, k;

	/*printf("\033[s");*/	/*保存光標位置*/	/*<---已經沒有必要性*/
  
	printf("\033[1;%dH", L);	/*設定生成初始位置*/
	
	printf("\033[2J");	/*清除介面，代替使用者Ctrl+L*/

	/*第一棵樹樹葉*/
	for (i=0;i<a;i++)
        {
                for (j=0;j<a-1-i;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1+2*i;j++)
                        printf("\033[32m*\033[0m");
                for (j=0;j<a-1-i;j++)
                        printf("\033[1m-\033[0m");
                printf("\033[%d;%dH", i+2, L);
        }
	/*第一棵樹樹幹*/
        for (k=0;k<(a-1)/2;k++)
        {
                for (j=0;j<a-1;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1;j++)
                        printf("\033[38;2;102;51;0m*\033[0m");
                for (j=0;j<a-1;j++)
                        printf("\033[1m-\033[0m");
                i++;
                printf("\033[%d;%dH", i+1, L);
        }
	printf("\033[1;%dH", L+1+2*(a-1)+1);	/*生成第二顆樹在右手邊*/
        /*第二棵樹樹葉*/
	for (i=0;i<b;i++)
        {
                for (j=0;j<b-1-i;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1+2*i;j++)
                        printf("\033[32m*\033[0m");
        	for (j=0;j<b-1-i;j++)
                        printf("\033[1m-\033[0m");
                printf("\033[%d;%dH", i+2, L+1+2*(a-1)+1);
        }
	/*第二棵樹樹幹*/
        for (k=0;k<(b-1)/2;k++)
        {
                for (j=0;j<b-1;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1;j++)
                        printf("\033[38;2;102;51;0m*\033[0m");
       	 	for (j=0;j<b-1;j++)
                        printf("\033[1m-\033[0m");
		i++;
                printf("\033[%d;%dH", i+1, L+1+2*(a-1)+1);
        }
	printf("\033[1;%dH", L+1+2*(a-1)+1+2*(b-1)+1+1);	/*生成第三棵樹在最右邊*/
	/*第三棵樹樹葉*/
	for (i=0;i<c;i++)
        {
                for (j=0;j<c-1-i;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1+2*i;j++)
                        printf("\033[32m*\033[0m");
                for (j=0;j<c-1-i;j++)
                        printf("\033[1m-\033[0m");
                printf("\033[%d;%dH", i+2, L+1+2*(a-1)+1+2*(b-1)+1+1);
        }
	/*第三棵樹樹幹*/
        for (k=0;k<(c-1)/2;k++)
        {
                for (j=0;j<c-1;j++)
                        printf("\033[1m-\033[0m");
                for (j=0;j<1;j++)
                        printf("\033[38;2;102;51;0m*\033[0m");
                for (j=0;j<c-1;j++)
                        printf("\033[1m-\033[0m");
                i++;
                printf("\033[%d;%dH", i+1, L+1+2*(a-1)+1+2*(b-1)+1+1);	
	}
	printf("\033[999;1H");	/*將光標移到最左下角位置*/	

	return 0;
}


