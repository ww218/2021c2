#include <stdio.h>
char line[1000];
int main()
{

    scanf("%s",line);

    int ans=0;//�j��e
    for(int i=0;i<1000;i++)
    {
    	if(line[i]=='2') ans++;//�j�餤,�[�[
    }
    printf("%d\n",ans);//�j���,�L�X

    return 0;
}
