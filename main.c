#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int factorial(int n) {
	int res =1;
	int i;
	for (i=1; i<=n; i++)
		res*=i;
	return res;
}



int combination(int n, int r) {
	
	int p,q; //���� ���� �и�
	p=factorial(n);
	q=factorial(n-r) * factorial(r);
	return p/q;
	
}



int main(void) {
	
	int n,r;
	
	//���� �Է� �ޱ� 
	printf("input n and r : ");
	scanf("%d %d", &n,&r);
	
	//
	int result;
	result=combination(n,r);
	printf("combination(n,r) is %d", result);
	
	
}
