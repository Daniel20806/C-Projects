#include <stdio.h>
#include <stdlib.h>

struct data
{
	char name[10];
	char ID[10];
	int t1;
	int t2;
	int t3;
	struct data *next;
};

typedef struct data DATA;

int main()
{
	int i=0, c=0;
	char ch;
	DATA *p, *previous, *current, *first;
	current=(DATA *) malloc(sizeof(DATA));
	p=current;
	first=current;
	FILE *fptr=fopen("111-1.txt", "r");
	while ((ch=getc(fptr))!=EOF)
		printf("%c", ch);	
	
	fclose(fptr);
	fptr=fopen("111-1.txt", "r");
	while ((ch=getc(fptr))!=EOF)
        {
                if (ch=='A')
                        fgets(current->name, 10, fptr);
                current->next=(DATA *) malloc(sizeof(DATA));
                current=current->next;
        }
	current=NULL;
	
	/*while(p!=NULL)
	{
		printf("%s\n", p->name);
		p=p->next;
	}*/

	return 0;
}
