#include <iostream>
#include <vector>
using namespace std;

//����Ľڵ�������������Ա��������ֵ val��������̽ڵ����� next��
struct ListNode
{
	int val; //�ڵ�ֵ
	ListNode* next; //�����ڵ�����
	ListNode(int x): val(x),next(NULL){}
};

void applay_List_node()
{
	//ʵ�����ڵ�
	ListNode* n1 = new ListNode(4);
	ListNode* n2 = new ListNode(5);
	ListNode* n3 = new ListNode(1);

	//��������ָ��
	n1->next = n2;
	n2->next = n3;

	cout << n1->val << endl;
	cout << n2->val << endl;
	cout << n3->val << endl;

}
int main2()
{
	applay_List_node();
	return 0;
}