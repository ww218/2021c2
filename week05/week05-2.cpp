#include <stdio.h>///複習泡泡排序
int a[10]={9,8,7,1,2,3,6,5,4,0};
int main()
{
    for(int k=0;k<10-1;k++)///兩兩排9次
    {
        for(int i=0;i<10-1;i++)
        {
            if( a[i]>a[i+1])///大小不對,交換
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
    }

}
