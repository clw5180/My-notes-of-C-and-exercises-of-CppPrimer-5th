void swap(int *a, int *b)
{
	*a ^= *b ^= *a ^= *b;
}

/*

��򣬿��Ժܷ���ؽ���������
	int i = 3;
    int j = 5;
    i^j^i = 5;
    i^j^j = 3;
*/