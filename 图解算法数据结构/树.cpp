#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//����һ�ַ��������ݽṹ�������ӽڵ������ɷ�Ϊ ���������� �� ���������
//���Ľڵ��Ϊ�����ڵ� root��
//�Զ�����Ϊ����ÿ���ڵ����������Ա��������ֵ val���������ӽڵ� left���������ӽڵ� right��

struct TreeNode
{
	int val;//�ڵ�ֵ
	TreeNode* left; //���ӽڵ�
	TreeNode* right;//���ӽڵ�
	TreeNode(int x): val(x),left(NULL),right(NULL){}
};

void tree()
{
	// ��ʼ���ڵ�
	TreeNode* n1 = new TreeNode(3); // ���ڵ� root
	TreeNode* n2 = new TreeNode(4);
	TreeNode* n3 = new TreeNode(5);
	TreeNode* n4 = new TreeNode(1);
	TreeNode* n5 = new TreeNode(2);

	//��������ָ��
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
}