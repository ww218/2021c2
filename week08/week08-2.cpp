#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nation[2001][80];///2001
int compare(const void *p1, const void *p2)
{
	return strcmp((char*)p1, (char*)p2);
}
int main()
{
	int N;
	scanf("%d",&N);

	for(int i=0;i<N;i++)
	{
		scanf("%s",nation[i]);///�Źj�_�}

		char name[80];///�H�W,���Ů�b��
		gets( name );///gets()��Ů�Y�i�h
	}

	qsort( nation, N, 80, compare);

	nation[N][0]=0;///�Ŧr��
	int combo=1;///�զ⪺����
	for(int i=0;i<N;i++)
	{
		if(strcmp( nation[i], nation[i+1])==0)///��Ӧr��ۦP
		{
			combo++;///���@�ӬۦP
		}
		else///���ۦP
		{
			printf("%s %d\n",nation[i],combo);
			combo = 1;///�s���}�l
		}
	}

}
