#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

int main()
{
	int i, c=0, check=0, v=1, result, num, m=0, u=0;
	char ch;
	NODE *first, *current, *previous, *temp, *p;
	first=(NODE *)malloc(sizeof(NODE));
	first->data=0;

	while (v)
	{
		printf("�п�J�@�ӥ����: ");
		result=scanf(" %d", &num);
		if (num<=0 || ((num-(int)num)) || !result)
		{
			printf("\n��J�D��ơA�A�T�w�n������J��?(Y/N)>>");
			do
			{
				check=0;
				fflush(stdin);
				if (u)
				{
					printf("-");
					u=0;
				}
				scanf("%c", &ch);
				if (ch=='Y' || ch=='y')
				{
					temp=first;
					p=first;
					m=c;
					printf("�Ҧ�����ƥѤj��p�Ƨǵ��G\n");
					while(m>0)
					{
						temp=p;
						for (i=0;i<m;i++)
							temp=temp->next;
						printf("#%03d: %d\n", v, temp->data);
						v++;
						m--;
					}
					printf("�Ҧ�����ƥѤp��j�Ƨǵ��G\n");
					for (i=0;i<c;i++)
					{
						printf("#%03d: %d\n", i+1, first->next->data);
						first=first->next;
					}
					v=0;
					break;
				}
				else if (ch=='N' || ch=='n')
				{
					check=0;
					continue;
				}
				else
					check++;
				u++;
			}while(check);
		}
		else
		{
			c++;
			current=(NODE *)malloc(sizeof(NODE));
			current->data=num;
			for (i=0;i<c-1 || i==0;i++)
			{
				if (c==1)
				{
					first->next=current;
					m++;
				}
				else
				{
					if (!i)
					{
						p=first;
						temp=first->next;
					}
					if (num>=(temp->data))
					{
						p=temp;
						temp=temp->next;
					}
					else
					{
						previous=temp;
						p->next=current;
						current->next=previous;
						m++;
						break;
					}
				}
			}
			if (!m)
				p->next=current;
			m=0;
		}
	}	

	return 0;
}
