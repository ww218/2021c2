#include <stdio.h>///�禡�蹳�r
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
    printf("�L���蹳�r�O:%c",ans);
}
