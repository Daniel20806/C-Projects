#include <stdio.h>

int main()
{
	int c=1;
	char b1[15], b2[15], b3[15];
	printf("輸入第一人生日: \n");
	scanf("%s", b1);
	printf("輸入第二人生日: \n");
	scanf("%s", b2);
	printf("輸入第三人生日: \n");
	scanf("%s", b3);
	if (b1[5]==b2[5] && b1[6]==b2[6]\ 
	&& b1[8]==b2[8] && b1[9]==b2[9])   
	{
		if (b3[5]==b2[5] && b3[6]==b2[6]\
        	&& b3[8]==b2[8] && b3[9]==b2[9])
			printf("三人生日皆相同\n");
		else
			printf("第一人與第二人生日相同\n");	
	}
	else if (b3[5]==b2[5] && b3[6]==b2[6]\
        && b3[8]==b2[8] && b3[9]==b2[9])
		printf("第二人與第三人生日相同\n");
	else if (b1[5]==b3[5] && b1[6]==b3[6]\
        && b1[8]==b3[8] && b1[9]==b3[9])
		printf("第一人與第三人生日相同\n");
	else
		printf("沒有人生日相同\n");

	return 0;
}
