#include <stdio.h>
int main() {
	int a, sum = 0;
	double i = 0;
	a = 1;
	while (a > 0) {
		printf("enter a number : ");
		scanf("%d",&a);
		sum += a;
		i++;
	}
	printf("%d ",sum);
	printf("Average : %f\n",sum/i);
} 
