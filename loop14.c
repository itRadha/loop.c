//1st N natural no in reverse form
#include <stdio.h>
int main()
{
	int N;
	printf("Enter the value of N: ");
	scanf("%d", &N);
	for(int i=N; i>=0;i=i-1){
	printf("%d\n", i);
	}
	return 0;
}
