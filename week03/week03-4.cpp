#include <stdio.h>///Tell me the frequencies//cpe
char line[2000];
int main()
{
	int t=1;
	while(scanf("%s",line)==1)
	{
		if(t>1) printf("\n");
		printf("車廂%d讀到一筆資料歐\n",t);
		t++;
	}
	return 0;
}
