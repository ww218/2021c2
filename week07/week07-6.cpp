#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[1000][80];
int compare(const void * p1,const void * p2)///字母排序
{
	strcmp( (char*)p1, (char*)p2);
}
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++)//input
	{
		scanf("%s",line[i]);//讀入地名//遇到空格停止

		char others[80];//讀入剩下的
		gets( others );
	}

	qsort( line, N, 80, compare);///字母排序

	for(int i=0;i<N;i++)//output
	{
		printf("%s\n",line[i]);
	}

}
