#include <stdio.h>///�ֳt�Ƨ�
#include <stdlib.h>
int comp( const void *p1, const void *p2 )///�����Ψ禡
{
    int a =*(int*)p1, b = *(int*)p2;
    if( a>b ) return +1;///�T�ت��p,�f�Z:a-b
    if( a<b ) return -1;
    if( a==b )return 0;
}
int main()
{
    int a[100];///�����ýX
    for(int i=0;i<100;i++)printf("%d ",a[i]);
    printf("\n");///���ݤ��e

    qsort( a, 100, sizeof(int), comp);

    for(int i=0;i<100;i++)printf("%d ",a[i]);
    printf("\n");///�Ƨ��ˬd
}

