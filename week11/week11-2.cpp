#include <iostream>//C++ std::vector
#include <vector>
char name[100][30];
int grade[100];
using namespace std;//��std::�i�H�ٲ�
int main()
{
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> name[i] >> grade[i];
	}//��Ʃ��k�y���ܼƸ�

	for(int i=0;i<N;i++)
	{
		cout << name[i] << endl;//end line ��ܸ���
	}//�e�쥪��<<�ܼ�
}
