void ReversePrint(Node* pHead) {
	if (pHead == NULL) {
		return;
	}
	Stack s;
	StackInit(&s);
	Node* pCur = pHead;//遍历链表，将链表中元素放到栈中
	while (pCur) {
		StackPush(&s, pCur->data);
		pCur = pCur->_M_next;
	}
	//将栈中所有元素打印
	while (StackEmpty(&s)) {
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	StackDestory(&s);
}