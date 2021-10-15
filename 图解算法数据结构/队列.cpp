#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//队列是一种具有 「先入先出」 特点的抽象数据结构，可使用链表实现。
//入队 push(),出队 pop()
void duilie()
{
	queue<int> que;
	que.push(1); // 元素 1 入队
	que.push(2); // 元素 2 入队
	que.pop();   // 出队 -> 元素 1
	que.pop();   // 出队 -> 元素 2
}