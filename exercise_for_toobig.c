#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
	int big_int = 2147483647;//有符号的整形数据最大值是2的31次方减1
	float big_float = 3.4e38;//浮点型数据的最大值一般为3.4E38
	float small_float = 10.0 / 3;//浮点型数据的有效位数为六位
	printf("The big int date is %d\n", big_int + 1);
	printf("The big float data is %f\n", big_float * 10);
	printf("The big float data is %f\n", small_float);
	printf("The MAX float data is %f\n", FLT_MAX);
	printf("The MAX int data is %ld\n", INT_MAX);

	return 0;
}
