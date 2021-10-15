#include <string>
#include <unordered_map>
#include <iostream>

//假设需求：从「学号」查找「姓名」
using namespace std;

//构建hash函数
int hash1(int id) {
	int index = (id - 1) % 10000;
	return index;
}
string names[] = { "小力", "小特", "小扣" };

int main()
{

	string n1=names[hash1(10001)];// 小力
	names[hash1(10002)]; // 小特
	names[hash1(10003)]; // 小扣
	cout << n1 << endl;
}
