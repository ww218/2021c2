#include <stdio.h>///快速排序
#include <stdlib.h>
int comp( const void *p1, const void *p2 )///必較用函式
{
    int a =*(int*)p1, b = *(int*)p2;
    if( a>b ) return +1;///三種狀況,口訣:a-b
    if( a<b ) return -1;
    if( a==b )return 0;
}
int main()
{
    int a[100];///內附亂碼
    for(int i=0;i<100;i++)printf("%d ",a[i]);
    printf("\n");///先看內容

    qsort( a, 100, sizeof(int), comp);

    for(int i=0;i<100;i++)printf("%d ",a[i]);
    printf("\n");///排完檢查
}

