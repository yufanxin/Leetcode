#include <string>
#include <unordered_map>
#include <iostream>

//�������󣺴ӡ�ѧ�š����ҡ�������
using namespace std;

//����hash����
int hash1(int id) {
	int index = (id - 1) % 10000;
	return index;
}
string names[] = { "С��", "С��", "С��" };

int main()
{

	string n1=names[hash1(10001)];// С��
	names[hash1(10002)]; // С��
	names[hash1(10003)]; // С��
	cout << n1 << endl;
}
