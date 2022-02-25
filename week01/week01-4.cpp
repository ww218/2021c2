#include <stdio.h>
char line[1000];
int main()
{

    scanf("%s",line);

    int ans=0;//迴圈前
    for(int i=0;i<1000;i++)
    {
    	if(line[i]=='2') ans++;//迴圈中,加加
    }
    printf("%d\n",ans);//迴圈後,印出

    return 0;
}
