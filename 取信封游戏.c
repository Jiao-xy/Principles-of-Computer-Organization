#include <stdio.h>

int main() {
	int n;
	printf("%d", sizeof(long long ));
	while (1) {
		printf("������һ����(����0�˳�����)��");
		scanf("%d", &n);
		if (!n)
			break;
		int i = 1;
		int t = 1;
		while (n) {
			if (n % 2) {
				printf("�õ�%d���ŷ�:%d\n", i, t);
			}
			n = n / 2;
			i++;
			t *= 2;
		}
	}
	return 0;
}