#include <stdio.h>
main(){
	int a; 
	int b;
	int sum=0;
	printf("합을 구할 첫번쨰 수(큰수):");
	scanf("%d",&b);
	printf("합을 구할 마지막 수 입력(작은수):");
	scanf("%d",&a);
	while(a<=b){
		b--;
		sum=sum+b;
	}
	printf("%d부터 %d까지의 합은 %d입니다.",b,a,sum);
} 
