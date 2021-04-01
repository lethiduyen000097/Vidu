#include <stdio.h>

int main() {
	int n, a, b;
	scanf("%d\n", &n);
	scanf("%d %d", &a, &b);
	if ((n % a == 0) && (n % b == 0 )) {
		printf("Co, tat ca!");
	}
	if ((n % a == 0) && (n % b != 0 )) {
		printf("Chi chia het cho ");
		printf("%d", a);
		printf(",");
	}
	if ((n % a != 0) && (n % b == 0 )) {
		printf("Chi chia het cho ");
		printf("%d", b);
		printf(".");
	}
	if ((n % a != 0) && (n % b != 0 )) {
		printf("Khong chia het cho so nao ca.");
	}
	
}
