#include<stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	if(b==0) printf("INF");
	else printf("%.2f",(float)a/b);
	return 0;
}

