#include <stdio.h>

int facto(int n);

int main()
{
	int n;
	printf("�Է� : ");
	scanf("%d", &n);
    printf("%d", facto(n));

    return 0;
}

int facto(int n)
{
    if (n == 1)      // n�� 1�� ��
        return 1;    // 1�� ��ȯ�ϰ� ���ȣ���� ����

    return n * facto(n - 1);    // n�� �Լ��� n - 1�� �־ ��ȯ�� ���� ����
}
