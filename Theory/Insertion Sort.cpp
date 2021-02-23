// �������� :  
// ������ �Ǿ��ִٰ� �����Ѵ�. 
/*
	1 2 3 4 5 6 7 8 9 10
	1 + 2 + 3 + ... 10
	=> O(N^2)
	���� �˰��� �� ���� ����Ʈ�� �˰���
	���� ���ĵ� ���¿� ���ؼ��� � �˰��򺸴ٵ� �����ٴ� Ư¡�� �������ִ�.
	ex) 2 3 4 5 6 7 8 9 10 1 
*/

#include <stdio.h>

int main()
{
	int i,j,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(int i=1; i<10; i++)
	{
		j = i;
		while(array[j-1] > array[j]) {
			temp = array[j-1];
			array[j-1] = array[j];
			array[j] = temp;
			j--;
		}
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d ",array[i]);
	} 
	
	return 0;	
} 
