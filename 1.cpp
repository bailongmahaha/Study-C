/*
1+1/2+1/3+1/4+1/5+...+1/100=?
*/

# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1.0/i;   //��OK�� �Ƽ�ʹ��
			//sum = sum + (float)(1/i); ����д�ǲ��Ե� 
			//Ҳ��������д:  sum = sum + 1 / (float)(i);   ���Ƽ�
	}
	printf("sum = %f\n", sum);  //float������%f���

	return 0;
}