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
	vector<student>stu(N);//啟用vector 的變數stu,可裝N個
	//單位是student stu這個變數,可裝N個student
	for(int i=0;i<N;i++)
	{
		cin >> stu[i].name >>stu[i].grade;
		//cin >> name[i] >> grade[i];
	}

	for(int i=0;i<N;i++)
	{
		cout << stu[i].name << " " << stu[i].grade << endl;
		//cout << name[i] << endl;//end line 表示跳行
	}
}
