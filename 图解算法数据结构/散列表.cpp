#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

void sanliebiao()
{
	// ��ʼ��ɢ�б�
	unordered_map<string, int> dic;

	// ��� key -> value ��ֵ��
	dic["С��"] = 10001;
	dic["С��"] = 10002;
	dic["С��"] = 10003;

	// ����������ѧ��
	dic.find("С��")->second; // -> 10001
	dic.find("С��")->second; // -> 10002
	dic.find("С��")->second; // -> 10003
}

int main5()
{
	sanliebiao();
	return 0;
}