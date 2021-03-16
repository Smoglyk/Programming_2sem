#include <stdio.h>  
#include "main1.h"  

int main()
{
	double number=check_input();

    while(check_input2(number)==0)
    {
        number=check_input();
    }

    int decimal=(int) number;
    double num=number-decimal;
    int num1=num*10;
    int num2=(num*100-num1*10);
    int num3=(num*1000-num1*100-num2*10);   
    int sum=num1+num2+num3;

    printf("%d",num3);
    printf("%d",sum);
	return 0;
}

double check_input()
{
    double number;
    printf("Enter the number: ");
	while (!(scanf("%lf", &number)) && (number = getc(stdin)) != EOF)
	{
		printf("Error. Try one more time ");
	}
    return number;
}

int check_input2(double number)
{
    if((int)number==number)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}