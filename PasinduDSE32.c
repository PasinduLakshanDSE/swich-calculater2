#include<stdio.h>
int main(){
	int num1;
	int num2;
	char opcode;
	printf("Enter the opcode:");
	scanf("%c",&opcode);
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2:");
	scanf("%d",&num2);
	
	
	switch(opcode){
		int total;
		
		
		case '+':
			 total=num1+num2;
			printf("total:%d\n",total);
			break;
		case '-':
			 total=num1-num2;
			printf("total:%d\n",total);
			break;
		case '*':
			 total=num1*num2;
			printf("total:%d\n",total);
			break;
		case '/':
		    total=num1/num2;
			printf("total:%d\n",total);
			break;
		default:
			printf("invalid input\n");
			break;
		
	}
	return 0;
}