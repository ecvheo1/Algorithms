// �������� : ���� �ִ� ���� ���ؼ� �� ���� ���� �ϳ��� �ڷ� ������. 
/*
	1 2 3 4 5 6 7 8 9 10
	=> 10 + 9 + 8 + ... + 1
	=> N * (N + 1) / 2
	=> O(N^2)
	
	���� ����ð��� �������ĺ��� ���� �ɸ���. 
*/

#include <stdio.h>

int main()
{
	int i, j, temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j < 9-i; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	
	for(int i=0; i<10; i++)
	{
		printf("%d ",array[i]);
	} 
	
	return 0;	
} 
