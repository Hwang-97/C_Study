//예제 1-1.c
/*
	예제 : Hello 출력하기
	파일 이름 : 예제 1-1.c
	수정 날짜 : 2022년 04월 04일 
	작성자 : 황현우 
*/

/*
	Standard Input/Output library 선언 
	stdio.h 헤더 파일은 여러 형의 입출력 함수가 포함된 헤더 파일이다.
*/
#include <stdio.h>

/*
	main 함수를 반환값이 없는 void 형태로 선언한다. 
	해당 프로그램의 진입점이다. 
*/		
void main() {
	
	/*
		위의 헤더파일에 포함되어 있는 함수인 printf함수를 통해 console창에 "Hello~"라는 문자열을 출력하며
		\n를 이용해 개행 처리를 한다. 
	*/ 
	printf("Hello~\n");
	
} /* 해당 프로그램이 끝나는 지점이다. */
