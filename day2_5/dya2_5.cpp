#include <stdio.h>//***************************************define�̿��ؼ� �ٽ� �����ϱ�!!*********************************************
//#define TRUE 1
//#define FALSE 0
//int isPrime = TRUE; �̷� ����� ����!
int main(void)
{
	int i, count = 0, start = 2;
	int prime;
	//int br = 0;

	printf("The 50 prime numbers are\n");

	while (count < 50) {
		
		for (i = 2; i <= start; i++) {
			
			if (start == i) {
				count++;
				if(count % 10 == 0)
					printf("%4d\n", i);
				else
					printf("%4d", i);
				break;
			}
			else if (start % i == 0) 
				break;
		}
		start++;//for(num = 2; num > 0; num++)�̷��� �������� ���ѷ����� ���� �ۿ� ����....!!! num++IDEA!!!
	}
		
}