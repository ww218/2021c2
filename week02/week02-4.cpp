#include <stdio.h>///函式鏡像字
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE    8 ";
int mirror_char( char c )
{
    for(int i=0; tableA[i]!=0; i++)
    {
        if( c==tableA[i] ) return tableB[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    char ans=mirror_char( c );
    printf("他的鏡像字是:%c",ans);
}
