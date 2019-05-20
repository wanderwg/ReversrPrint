void ReversePrint(Node* pHead) {
	if (pHead) {
		ReversePrint(pHead->next);
		printf("%d ", pHead->data);
	}
}