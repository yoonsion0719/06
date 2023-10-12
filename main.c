#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo(int a,int b) {
	return a+b;
}

int square(int n) {
	return n*n;
}

int get_max(int x,int y) {
	
	if (x>y)
		return x;
	
	else if ( x<y )
		return y;
	else
	{printf("same");
	}
}


int main(void) {
	printf("%d\n",sumTwo(3,5));
	printf("%d\n",square(3));
	printf("%d\n",get_max(3,5));
	
	
	return 0;
}
