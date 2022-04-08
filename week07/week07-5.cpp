#include <stdio.h>
char line[1000][80];
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++)//input
	{
		scanf("%s",line[i]);///讀入地名//遇到空格停止

		char others[80];///讀入剩下的
		gets( others  );
	}

	for(int i=0;i<N;i++)//output
	{
		printf("%s\n",line[i]);
	}

}
