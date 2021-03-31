#include<stdio.h>
#include<math.h>

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a+b>c&&a+c>b&&b+c>a){
		double p=a+b+c;
		double s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
		printf("%d %.2lf", (int)p,s);
	}
	else printf("NO");
}
