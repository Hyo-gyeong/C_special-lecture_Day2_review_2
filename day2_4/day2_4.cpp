#include <stdio.h>
int main(void)//��Ȯ�ϰ� �ٽ� ����!
{
	int input;
	int i, j;

	printf("���� �Է�: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++){
		for (j = 0; j < i; j++){
			printf("%d", input - j);
		}
	printf("\n");
	}
}