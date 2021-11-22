#include <iostream>
#include <float.h>
#include <limits.h>
using namespace std;

int main() {

	printf("float 类型能存储的最大值:%.1f\n", FLT_MAX);
	printf("float 类型能存储的最小值:%.308f\n", FLT_MIN);
	cout << "double 类型能存储的最大值DBL_MAX = " << DBL_MAX << endl;
	cout << "double 类型能存储的最小值DBL_MIN = " << DBL_MIN << endl;

	printf("你的32位钱：%.1f\n", FLT_MAX + 1);
	printf("你的64位钱：%.1f\n", DBL_MAX + 1);

	return 0;
}
