#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

void sanliebiao()
{
	// 初始化散列表
	unordered_map<string, int> dic;

	// 添加 key -> value 键值对
	dic["小力"] = 10001;
	dic["小特"] = 10002;
	dic["小扣"] = 10003;

	// 从姓名查找学号
	dic.find("小力")->second; // -> 10001
	dic.find("小特")->second; // -> 10002
	dic.find("小扣")->second; // -> 10003
}

int main5()
{
	sanliebiao();
	return 0;
}