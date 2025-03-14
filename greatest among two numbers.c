#include<stdio.h>
int main(){
	int a,b;
	printf("enter two number:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{printf("the greatest number is:%d\n",a);
	}
	if(b>a){
		printf("the greatest number is:%d\n",b);
	}
	return 0;
}
