#include <stdio.h>//***************************************define이용해서 다시 연습하기!!*********************************************
//#define TRUE 1
//#define FALSE 0
//int isPrime = TRUE; 이런 방법도 있음!
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
		start++;//for(num = 2; num > 0; num++)이렇게 가버리면 무한루프를 돌수 밖에 없음....!!! num++IDEA!!!
	}
		
}