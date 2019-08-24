#include<stdio.h>
int main()
{
	int a;
	printf("enter the values from 1 to 5");
	scanf("%d", &a);
	switch(a)
	{
	
		case 1:
			printf("monday");
			break;
		case 2:
				printf("tuesday");
				break;
		case 3:
				printf("wednesday");
				break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		default:
			printf("enter the choice is invalid:");
	}
}
