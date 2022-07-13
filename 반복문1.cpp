#include <stdio.h>
main(){/*
	//30부터 10까지 짝수 
	int num=30; 
	while(num>=10){
		if(num%2==0)
			printf("%d\n",num);
			num--;
	} */
	
	//부터10까지의 합
	printf("\n1부터10까지의 합 구하기");
	int i=1;
	int sum=0;
	
	while(i<=10){
		i++;
		sum+=i;
	} 
	printf("\n1부터10까지의 합:%d",sum);

	 
	
	
}
