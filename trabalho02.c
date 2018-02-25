#include<stdio.h>
#include<stdlib.h>

//função
void soma(int num1, int num2)
{
	int result;
	result=num1+num2;
	printf("\n a soma de Num1+Num2: \n %d", result);
}


//programa principal
int main()
{
	int num1, num2;
	
	num1= 17;
	num2= 23;
	
	soma(num1,num2);
	
	
system("pause>NULL");
return 0;
}

