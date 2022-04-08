#include <stdio.h>///List of conquests
char line[1000][80];
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++)///input
	{
		gets(line[i]);
	}

	for(int i=0;i<N;i++)///output
	{
		printf("%s\n",line[i]);
	}

}

