#include <stdio.h>
main(){
	int a; 
	int b;
	int sum=0;
	printf("���� ���� ù���� ��(ū��):");
	scanf("%d",&b);
	printf("���� ���� ������ �� �Է�(������):");
	scanf("%d",&a);
	while(a<=b){
		b--;
		sum=sum+b;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.",b,a,sum);
} 
