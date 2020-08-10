#include<stdio.h>
#include<stdbool.h>

int main() {
	int a = 1, b = 0, c = 0;
	scanf_s("%d%d%d",&a,&b,&c);
	printf("%d", a || b && !c);
	printf("%d", !a && !b);
	printf("%d", !(a && c) || b);
	printf("%d", a && !b || c);

     
	
		
	

	return 0;
} 