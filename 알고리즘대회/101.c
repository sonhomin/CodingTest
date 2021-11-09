#include<stdio.h>

int defBin(int n); // 함수 선언
int main(void) {

    int number;
    printf("10진수 정수 입력: ");
    scanf("%d", &number); // 10진 정수 입력
    defBin(number); // 함수호출
    printf("\n");

    return 0;

}

int defBin(int n) { // 2진수 변환

    if (n == 0 || n == 1) // n의 값이 0또는 1이되면 n의 값을 출력
        printf("%d", n);
    else {
        defBin(n / 2); // 재귀 : 2로 나눈 값을 매게변수로 사용
        printf("%d", n % 2); // n을 2로 나눈 나머지
	}
    return 0;
}
