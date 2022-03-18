#include <stdio.h>///加max///用來計算最大值1000內
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
			char c = line[i];///現在的字母C
			ans[c]++;///統計+1
			if(ans[c]>max) max=ans[c];
		}
		for(int f=1;f<=max;f++)///按照順序印
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
