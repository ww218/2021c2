#include <iostream>//C++ std::vector
#include <vector>
using namespace std;
class student
{
public:
	char name[30];
	int grade;
};
int main()
{
	int N;
	cin >> N;
	vector<student>stu(N);//�ҥ�vector ���ܼ�stu,�i��N��
	//���Ostudent stu�o���ܼ�,�i��N��student
	for(int i=0;i<N;i++)
	{
		cin >> stu[i].name >>stu[i].grade;
		//cin >> name[i] >> grade[i];
	}

	for(int i=0;i<N;i++)
	{
		cout << stu[i].name << " " << stu[i].grade << endl;
		//cout << name[i] << endl;//end line ��ܸ���
	}
}
