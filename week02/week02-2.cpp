#include <stdio.h>///cpe�i���m��//�j��,�禡,�r�ꪺstrlen()
#include <string.h>
char line[1000];
int palindrome()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]!=line[N-1-i]) return 0;
    }
    return 1;
}
int main()
{
	while(scanf("%s",line)==1)
	{
		int p=palindrome();
		if(p==1)printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0)printf("%s -- is not a  palindrome.\n\n",line);
	}
}


