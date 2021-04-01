#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	long long denta;
//	float x1,x2;
	denta=b*b-4*a*c;
	if(a==0){
	    if(b==0&&c==0) printf("INF");
	    else printf("%.2f",-c/b);
	}
	else{
	   if(denta<0)printf("NO");
	     if(denta==0)
	          printf("%.2f",-b/(2*a));
	   	else{
	          printf("%.2f",(-b-sqrt(denta))/(2*a));
	          printf("%.2f",(-b+sqrt(denta))/(2*a));
	   	}
	}
	return 0;
}
