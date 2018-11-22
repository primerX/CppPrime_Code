
// 求 val 的阶乘
int fact(int val)
{
	if(val < 0){	// 值小于 0
		return -1;
	}
	int ret = 1;
	for(int i = 0; i <= val; ++i){
		ret *= i;
	}
	return ret;
}