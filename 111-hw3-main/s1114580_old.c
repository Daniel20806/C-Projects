#include <stdio.h>
#define L 1	/*��K�վ�ͦ���m*/

void tree(int);

int main()
{
	int a, b, c;
	do
	{
		/*printf("��J�e�Х�Ctrl+L��z����!\n");*/	/*<---�w�g�S�����n��*/
		printf("��J�T�ʾ𪺤ؤo(a, b, c):\n");
		scanf("%d %d %d", &a, &b, &c);
	}while(a<3 || a>13 || a%2==0 || b<3 || b>13 || b%2==0 || c<2 || c>13 || c%2==0);
	int i, j, k;

	/*printf("\033[s");*/	/*�O�s���Ц�m*/	/*<---�w�g�S�����n��*/
  
	printf("\033[1;%dH", L);	/*�]�w�ͦ���l��m*/
	
	printf("\033[2J");	/*�M�������A�N���ϥΪ�Ctrl+L*/

	/*�Ĥ@�ʾ��*/
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
	/*�Ĥ@�ʾ��F*/
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
	printf("\033[1;%dH", L+1+2*(a-1)+1);	/*�ͦ��ĤG����b�k����*/
        /*�ĤG�ʾ��*/
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
	/*�ĤG�ʾ��F*/
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
	printf("\033[1;%dH", L+1+2*(a-1)+1+2*(b-1)+1+1);	/*�ͦ��ĤT�ʾ�b�̥k��*/
	/*�ĤT�ʾ��*/
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
	/*�ĤT�ʾ��F*/
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
	printf("\033[999;1H");	/*�N���в���̥��U����m*/	

	return 0;
}


