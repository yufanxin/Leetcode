#include <iostream>
#include <vector>
using namespace std;

void dynamic_array() 	//�ɱ�����
{

// ��ʼ���ɱ�����
	vector<int> array;

	// ��β�����Ԫ��
	array.push_back(2);
	array.push_back(3);
	array.push_back(1);
	array.push_back(0);
	array.push_back(2);
	cout << array[1] << endl;

}



int main1()
{
	dynamic_array();
	return 0;
}