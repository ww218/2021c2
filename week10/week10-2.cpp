#include <stdio.h>///�Ƨ�
#include <string.h>
char name[100][30],tempname[30];

int grade[100];
int main()
{
    FILE * fin = fopen ("input.txt","r");
    int N;
    fscanf( fin, "%d", &N);///scanf("%d",&N)
    for(int i=0;i<N;i++)
    {
        fscanf( fin, "%s %d", name[i], &grade[i]);
    }
    for(int k=0;k<N-1;k++)
    {
        for(int i=0;i<N-1;i++)
        {
            if(grade[i]<grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;

                strcpy(tempname,name[i]);
                strcpy(name[i],name[i+1]);
                strcpy(name[i+1],tempname);
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf( "%s %d\n",name[i],grade[i]);
    }
}

