int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

// 返回一个引用，该引用所引用的对象是一个含 5 个整数的数组
decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;	// 返回数组的引用
}