#include <iostream>
#include <float.h>
#include <limits.h>
using namespace std;

int main() {

	printf("float �����ܴ洢�����ֵ:%.1f\n", FLT_MAX);
	printf("float �����ܴ洢����Сֵ:%.308f\n", FLT_MIN);
	cout << "double �����ܴ洢�����ֵDBL_MAX = " << DBL_MAX << endl;
	cout << "double �����ܴ洢����СֵDBL_MIN = " << DBL_MIN << endl;

	printf("���32λǮ��%.1f\n", FLT_MAX + 1);
	printf("���64λǮ��%.1f\n", DBL_MAX + 1);

	return 0;
}
