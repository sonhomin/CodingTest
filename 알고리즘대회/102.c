#include<stdio.h>

int result(int n1, int n2);

int main(void){
	int num1, num2;
	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2){ // �� ���ϱ� 
		printf("�ִ������� %d �Դϴ�.\n", result(num2, num1));
	}
	else{
		printf("�ִ������� %d �Դϴ�.\n", result(num1, num2));
	}
	return 0;
}

int result(int n1, int n2)// (ū��,������)
{
	if (n2 == 0) { // �������� 0�� ���, �������� 0�ϰ��
		return n1;
	}
	return result(n2, n1%n2);
}
