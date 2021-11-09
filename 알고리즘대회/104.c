#include <stdio.h>

int facto(int n);

int main()
{
	int n;
	printf("입력 : ");
	scanf("%d", &n);
    printf("%d", facto(n));

    return 0;
}

int facto(int n)
{
    if (n == 1)      // n이 1일 때
        return 1;    // 1을 반환하고 재귀호출을 끝냄

    return n * facto(n - 1);    // n과 함수에 n - 1을 넣어서 반환된 값을 곱함
}
