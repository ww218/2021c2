#include <stdio.h>///Tell me the frequencies//cpe
char line[2000];
int main()
{
	int t=1;
	while(scanf("%s",line)==1)
	{
		if(t>1) printf("\n");
		printf("���[%dŪ��@����Ƽ�\n",t);
		t++;
	}
	return 0;
}
