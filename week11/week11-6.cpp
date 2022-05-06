#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    ///沒有說v要多大,所以v有0個
    v.push_back(10);///把10放進去,v有1個
    v.push_back(11);///把11放進去,v有2個
    v.push_back(15);///把15放進去,v有3個

    vector<int>::iterator it;///iterator迭代子,迴圈會用到的那個i
    for(it=v.begin() ; it!=v.end() ; it++)//for(int i=0;i<3;i++)
    {
        cout <<*it << endl;//cout << v[i] << endl;
    }
}


