///qsort()�r��Ƨ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[1000][20];
int compare( const void *p1, const void *p2)
{
	return strcmp( (char*)p1,(char*)p2);///����return
}

int main()
{
	int N;
	scanf("%d",&N);///����J\n
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);///��scanf
	}
	qsort( line , N, 20, compare);

	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}
