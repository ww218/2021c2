#include <stdio.h>///複習排序
int a[10]={9,8,7,1,2,3,6,5,4,0};
int main()
{
    for(int i=0;i<10;i++)///左手i
    {
        for(int j=i+1;j<10;j++)///右手i
        {
            if( a[i]>a[j])///大小不對,交換
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
}
