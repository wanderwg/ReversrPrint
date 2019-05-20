void ReversePrint(Node* pHead) {
	if (pHead == NULL) {
		return;
	}
	Stack s;
	StackInit(&s);
	Node* pCur = pHead;//����������������Ԫ�طŵ�ջ��
	while (pCur) {
		StackPush(&s, pCur->data);
		pCur = pCur->_M_next;
	}
	//��ջ������Ԫ�ش�ӡ
	while (StackEmpty(&s)) {
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	StackDestory(&s);
}