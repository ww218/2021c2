#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1)printf("\n");

		int ans[256]={};
		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];///現在的字母
			ans[c]++;///統計+1
		}

		for(int c=128;c>=32;c--)///印答案
		{
			if(ans[c]>0)printf("%d %d\n",c,ans[c]);
		}
		t++;
	}
	return 0;
}
