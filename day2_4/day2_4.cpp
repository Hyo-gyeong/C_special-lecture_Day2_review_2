#include <stdio.h>
int main(void)//정확하게 다시 연습!
{
	int input;
	int i, j;

	printf("정수 입력: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++){
		for (j = 0; j < i; j++){
			printf("%d", input - j);
		}
	printf("\n");
	}
}