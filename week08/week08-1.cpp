#include <stdio.h>
char nation[2000][80];
     ///國家名2000筆 每筆80字母
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
	for(int i=0;i<N;i++)
	{
		printf("%s\n",nation[i]);
	}
}
