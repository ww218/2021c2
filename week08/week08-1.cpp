#include <stdio.h>
char nation[2000][80];
     ///��a�W2000�� �C��80�r��
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
	for(int i=0;i<N;i++)
	{
		printf("%s\n",nation[i]);
	}
}
