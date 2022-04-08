///qsort()字串排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[1000][20];
int compare( const void *p1, const void *p2)
{
	return strcmp( (char*)p1,(char*)p2);///直接return
}

int main()
{
	int N;
	scanf("%d",&N);///不輸入\n
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);///變scanf
	}
	qsort( line , N, 20, compare);

	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
