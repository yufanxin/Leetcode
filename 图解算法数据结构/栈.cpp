#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//ջ��һ�־��� ���������� �ص�ĳ������ݽṹ����ʹ�����������ʵ�֡�
//��ջ push(),��ջ pop()
void stack_me()
{
	stack<int> stk;
	//��ջ�ͳ�ջ
	stk.push(1); //Ԫ��1��ջ
	stk.push(2); //Ԫ��2��ջ

	stk.pop(); //��ջ-> Ԫ��2
	stk.pop(); //��ջ-> Ԫ��1

}

int main3()
{
	stack_me();
	return 0;
}
