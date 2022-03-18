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
			char c = line[i];///現在的字母C
			ans[c]++;///統計+1
		}
		for(int f=1;f<=1000;f++)///按照順序印
		{
			for(int c=128;c>=32;c--)///印答案
			{
				if(ans[c]==f)printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
	return 0;
}
