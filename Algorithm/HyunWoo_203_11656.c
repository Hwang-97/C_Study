#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_4(void){
	
//	int n = 4;
//	int* pt = NULL;
//	pt = &n;
//
//	printf("%d, %d, %d, %d\n", &n, *pt, *&pt, n);
//	
//	printf("%d\n",  &n  + *pt - *&pt + n);
//	
//	printf("%d, %d, %d", &n - *&pt, *pt , n);

//	1. ���ڿ� �Է¹ޱ�
//	2. 2�� ������ ������ ������ �̾Ƴ� => �ѱ��ھ� �ڷΰ��鼭 �̾Ƴ�
//	3. �ش� ���ڸ� ����ִ� �迭�� loop �����鼭 ù��° ���ڸ� ���� 
//	4. �� �ٸ� �迭�� ���� BUT �ձ��ڰ� �����ϸ� ���� ��¥�� �� sizeof �� ���� �ܾ� �������� ���� ex ) j-- 

	int i;
	int j;
	int column;
	int row;
	int size;
	char word[1001];
	
	scanf("%s",word);
	size = strlen(word);
	char preWordArr[size-1][size];
	
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			preWordArr[i][j-i] = word[j];
		}
	}
	
	for(i=0;i<size-1;i++){
		
		for(j=0;j<size-i;j++){
			printf("%c",preWordArr[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}

