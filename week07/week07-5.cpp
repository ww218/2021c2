#include <stdio.h>
char line[1000][80];
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++)//input
	{
		scanf("%s",line[i]);///Ū�J�a�W//�J��Ů氱��

		char others[80];///Ū�J�ѤU��
		gets( others  );
	}

	for(int i=0;i<N;i++)//output
	{
		printf("%s\n",line[i]);
	}

}
