#include <iostream>
#include <vector>
using namespace std;

//链表的节点对象具有两个成员变量：「值 val」，「后继节点引用 next」
struct ListNode
{
	int val; //节点值
	ListNode* next; //后续节点引用
	ListNode(int x): val(x),next(NULL){}
};

void applay_List_node()
{
	//实例化节点
	ListNode* n1 = new ListNode(4);
	ListNode* n2 = new ListNode(5);
	ListNode* n3 = new ListNode(1);

	//构建引用指向
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