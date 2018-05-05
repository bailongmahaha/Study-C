# include <stdio.h>

int main(void)
{
	int i = 33;

	printf("i = %#X\n", i);//%X是以十六进制打印，并且a到f打印出来的是大写的A,B,C,D,E,F

	//如果是%#X,则会在打印的十六进制结果前面加上0X。	

	return 0;
}

