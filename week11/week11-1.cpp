#include <iostream>//C++
#include <vector>
char name[100][30];
int grade[100];
int main()
{
	int N;
	std::cin >> N;
	for(int i=0;i<N;i++)
	{
		std::cin >> name[i] >> grade[i];
	}//��Ʃ��k�y���ܼƸ�

	for(int i=0;i<N;i++)
	{
		std::cout << name[i] << std::endl;//end line ��ܸ���
	}//�e�쥪��<<�ܼ�
}
