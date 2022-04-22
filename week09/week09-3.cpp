#include <stdio.h>///大到小///改用while
int grade[10]={9,8,1,2,3,7,6,4,5,0};
int main()
{
    int N=10;
    while(1)
    {
        for(int k=0;k<N-1;k++)
        {
            int chang=0;///進核心之前,變動0個地方
            for(int i=0;i<N-1;i++)///泡泡排序的核心
            {
                if(grade[i] < grade[i+1])///如果不符合需求
                {
                    int temp=grade[i];
                    grade[i]=grade[i+1];
                    grade[i+1]=temp;
                    chang++;///有變動位置
                }
            }
            if(chang==0)break;///如果沒有變動位置,原本已經排好了

            for(int i=0;i<N;i++)printf("%d ",grade[i]);
            printf("\n");
        }
    }
}



