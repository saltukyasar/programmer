#include<stdio.h>

int main () {
	
	int n;
	int fact = 1;
	
	printf ("faktoriyelini istedi�iniz sayinizi giriniz:");
	scanf ("%d",&n);
	
	while (n!=0) {
		printf ("%d\n",n);
		fact = fact*n;
		
		n--;
	}
	printf("%d",fact);
	
	return 0;
}
