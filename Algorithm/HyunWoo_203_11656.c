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

//	1. 문자열 입력받기
//	2. 2중 루프로 각각의 문장을 뽑아냄 => 한글자씩 뒤로가면서 뽑아냄
//	3. 해당 문자를 담고있는 배열을 loop 돌리면서 첫번째 문자를 비교함 
//	4. 또 다른 배열에 넣음 BUT 앞글자가 동일하면 다음 글짜를 비교 sizeof 가 작은 단어 기준으로 돌림 ex ) j-- 

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

