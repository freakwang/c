#include<stdio.h>
int main()
{
	int a,b,i,c=1;
	scanf("%d %d",&a,&b);
	for(i=9;i>1;i--){
		if(a%i==0&&b%i==0){
			c=c*i;
			a=a/i;
			b=b/i;
			continue;
		}
	}
	printf("its %d",c);
	return 0;
}
