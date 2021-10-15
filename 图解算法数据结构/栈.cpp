#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//栈是一种具有 「先入后出」 特点的抽象数据结构，可使用数组或链表实现。
//入栈 push(),出栈 pop()
void stack_me()
{
	stack<int> stk;
	//入栈和出栈
	stk.push(1); //元素1入栈
	stk.push(2); //元素2入栈

	stk.pop(); //出栈-> 元素2
	stk.pop(); //出栈-> 元素1

}

int main3()
{
	stack_me();
	return 0;
}
