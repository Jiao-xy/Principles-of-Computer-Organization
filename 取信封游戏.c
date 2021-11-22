#include <stdio.h>

int main() {
	int n;
	printf("%d", sizeof(long long ));
	while (1) {
		printf("请输入一个数(输入0退出程序)：");
		scanf("%d", &n);
		if (!n)
			break;
		int i = 1;
		int t = 1;
		while (n) {
			if (n % 2) {
				printf("拿第%d个信封:%d\n", i, t);
			}
			n = n / 2;
			i++;
			t *= 2;
		}
	}
	return 0;
}