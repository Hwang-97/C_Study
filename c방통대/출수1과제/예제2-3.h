// 예제2-3.h
/* 해당 파일은 header 파일로써 타 c 코드에서 호출시 사용가능한 코드이다. */

/*
	Standard Input/Output library 선언 
	stdio.h 헤더 파일은 여러 형의 입출력 함수가 포함된 헤더 파일이다.
*/
#include <stdio.h>

/*
	 컴파일되기 전 선행 처리기에 의해서 ADD(x, y)가 ((x)+(y)) 로 치환된다.
	 때문에 ADD(x, y)입력시 해당 식을 사용할 수 있다. 
*/
#define ADD(x, y) ((x)+(y))

/*
	 컴파일되기 전 선행 처리기에 의해서 SUB(x, y)가 ((x)-(y)) 로 치환된다.
	 때문에 SUB(x, y)입력시 해당 식을 사용할 수 있다. 
*/
#define SUB(x, y) ((x)-(y))






