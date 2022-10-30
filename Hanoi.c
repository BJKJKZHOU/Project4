#include "hanoi.h"
int main()
{
	int n;
	printf("ÇëÊäÈëÅÌÊı£º\n");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;

}