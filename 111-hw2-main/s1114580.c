#include <stdio.h>

int main()
{
	int c=1;
	char b1[15], b2[15], b3[15];
	printf("��J�Ĥ@�H�ͤ�: \n");
	scanf("%s", b1);
	printf("��J�ĤG�H�ͤ�: \n");
	scanf("%s", b2);
	printf("��J�ĤT�H�ͤ�: \n");
	scanf("%s", b3);
	if (b1[5]==b2[5] && b1[6]==b2[6]\ 
	&& b1[8]==b2[8] && b1[9]==b2[9])   
	{
		if (b3[5]==b2[5] && b3[6]==b2[6]\
        	&& b3[8]==b2[8] && b3[9]==b2[9])
			printf("�T�H�ͤ�ҬۦP\n");
		else
			printf("�Ĥ@�H�P�ĤG�H�ͤ�ۦP\n");	
	}
	else if (b3[5]==b2[5] && b3[6]==b2[6]\
        && b3[8]==b2[8] && b3[9]==b2[9])
		printf("�ĤG�H�P�ĤT�H�ͤ�ۦP\n");
	else if (b1[5]==b3[5] && b1[6]==b3[6]\
        && b1[8]==b3[8] && b1[9]==b3[9])
		printf("�Ĥ@�H�P�ĤT�H�ͤ�ۦP\n");
	else
		printf("�S���H�ͤ�ۦP\n");

	return 0;
}
