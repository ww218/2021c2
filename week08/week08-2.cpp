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
		scanf("%s",nation[i]);///空隔斷開

		char name[80];///人名,有空格在內
		gets( name );///gets()把空格吃進去
	}

	qsort( nation, N, 80, compare);

	nation[N][0]=0;///空字串
	int combo=1;///白色的那筆
	for(int i=0;i<N;i++)
	{
		if(strcmp( nation[i], nation[i+1])==0)///兩個字串相同
		{
			combo++;///找到一個相同
		}
		else///不相同
		{
			printf("%s %d\n",nation[i],combo);
			combo = 1;///新的開始
		}
	}

}
