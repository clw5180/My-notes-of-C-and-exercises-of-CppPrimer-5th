void swap(int *a, int *b)
{
	*a ^= *b ^= *a ^= *b;
}

/*

异或，可以很方便地交换两个数
	int i = 3;
    int j = 5;
    i^j^i = 5;
    i^j^j = 3;
*/