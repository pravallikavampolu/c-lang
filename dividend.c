#include<stdio.h>
int main()
{
	int dividend,divisor,quotient,remainder;
	printf("enter dividend value:");
	scanf("%d",&dividend);
	printf("enter divisor value:");
	scanf("%d",&divisor);
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("quotient=%d\n", quotient);
	printf("remainder=%d\n",remainder);
	return 0;
	
}
