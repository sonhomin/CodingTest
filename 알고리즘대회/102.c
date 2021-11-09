#include<stdio.h>

int result(int n1, int n2);

int main(void){
	int num1, num2;
	printf("정수 두개 입력 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2){ // 수 비교하기 
		printf("최대공약수는 %d 입니다.\n", result(num2, num1));
	}
	else{
		printf("최대공약수는 %d 입니다.\n", result(num1, num2));
	}
	return 0;
}

int result(int n1, int n2)// (큰값,작은값)
{
	if (n2 == 0) { // 작은값이 0일 경우, 나머지가 0일경우
		return n1;
	}
	return result(n2, n1%n2);
}
