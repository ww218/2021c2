#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[1000][80];
int compare(const void * p1,const void * p2)///�r���Ƨ�
{
	strcmp( (char*)p1, (char*)p2);
}
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++)//input
	{
		scanf("%s",line[i]);//Ū�J�a�W//�J��Ů氱��

		char others[80];//Ū�J�ѤU��
		gets( others );
	}

	qsort( line, N, 80, compare);///�r���Ƨ�

	for(int i=0;i<N;i++)//output
	{
		printf("%s\n",line[i]);
	}

}
