#include <stdio.h>///�[max///�Ψӭp��̤j��1000��
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1)printf("\n");

		int ans[256]={};
		int max=0;
		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];///�{�b���r��C
			ans[c]++;///�έp+1
			if(ans[c]>max) max=ans[c];
		}
		for(int f=1;f<=max;f++)///���Ӷ��ǦL
		{
			for(int c=128;c>=32;c--)///�L����
			{
				if(ans[c]==f)printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
	return 0;
}
