#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//������һ�־��� �������ȳ��� �ص�ĳ������ݽṹ����ʹ������ʵ�֡�
//��� push(),���� pop()
void duilie()
{
	queue<int> que;
	que.push(1); // Ԫ�� 1 ���
	que.push(2); // Ԫ�� 2 ���
	que.pop();   // ���� -> Ԫ�� 1
	que.pop();   // ���� -> Ԫ�� 2
}