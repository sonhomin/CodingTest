#include<stdio.h>

int defBin(int n); // �Լ� ����
int main(void) {

    int number;
    printf("10���� ���� �Է�: ");
    scanf("%d", &number); // 10�� ���� �Է�
    defBin(number); // �Լ�ȣ��
    printf("\n");

    return 0;

}

int defBin(int n) { // 2���� ��ȯ

    if (n == 0 || n == 1) // n�� ���� 0�Ǵ� 1�̵Ǹ� n�� ���� ���
        printf("%d", n);
    else {
        defBin(n / 2); // ��� : 2�� ���� ���� �ŰԺ����� ���
        printf("%d", n % 2); // n�� 2�� ���� ������
	}
    return 0;
}
