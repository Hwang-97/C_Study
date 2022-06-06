#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k); 

int main(int argc, char* argv[]){

	int answer = 0;

	char* id_list[] = {"muzi","apeach","frodo","muzi","apeach"};
	size_t id_list_len = 5;
	char* report[] = {"frodo","frodo","neo","neo","muzi"};
	size_t report_len = 5;
	int k=2;
	
	
	answer = solution(*id_list,id_list_len,*report,report_len,k);
	
	printf("answer : %d ", answer);

		
	return 0;
}


// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    return answer;
}
















