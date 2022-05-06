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
	}//資料往右流到變數裡

	for(int i=0;i<N;i++)
	{
		std::cout << name[i] << std::endl;//end line 表示跳行
	}//送到左邊<<變數
}
