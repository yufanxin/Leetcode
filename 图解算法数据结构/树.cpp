#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//树是一种非线性数据结构，根据子节点数量可分为 「二叉树」 和 「多叉树」
//最顶层的节点称为「根节点 root」
//以二叉树为例，每个节点包含三个成员变量：「值 val」、「左子节点 left」、「右子节点 right」

struct TreeNode
{
	int val;//节点值
	TreeNode* left; //左子节点
	TreeNode* right;//右子节点
	TreeNode(int x): val(x),left(NULL),right(NULL){}
};

void tree()
{
	// 初始化节点
	TreeNode* n1 = new TreeNode(3); // 根节点 root
	TreeNode* n2 = new TreeNode(4);
	TreeNode* n3 = new TreeNode(5);
	TreeNode* n4 = new TreeNode(1);
	TreeNode* n5 = new TreeNode(2);

	//构建引用指向
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
}