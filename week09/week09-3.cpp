#include <stdio.h>///�j��p///���while
int grade[10]={9,8,1,2,3,7,6,4,5,0};
int main()
{
    int N=10;
    while(1)
    {
        for(int k=0;k<N-1;k++)
        {
            int chang=0;///�i�֤ߤ��e,�ܰ�0�Ӧa��
            for(int i=0;i<N-1;i++)///�w�w�ƧǪ��֤�
            {
                if(grade[i] < grade[i+1])///�p�G���ŦX�ݨD
                {
                    int temp=grade[i];
                    grade[i]=grade[i+1];
                    grade[i+1]=temp;
                    chang++;///���ܰʦ�m
                }
            }
            if(chang==0)break;///�p�G�S���ܰʦ�m,�쥻�w�g�Ʀn�F

            for(int i=0;i<N;i++)printf("%d ",grade[i]);
            printf("\n");
        }
    }
}



