#include <iostream>//C++ std::vector
#include <vector>
char name[100][30];
int grade[100];
using namespace std;//讓std::可以省略
int main()
{
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> name[i] >> grade[i];
	}//資料往右流到變數裡

	for(int i=0;i<N;i++)
	{
		cout << name[i] << endl;//end line 表示跳行
	}//送到左邊<<變數
}
