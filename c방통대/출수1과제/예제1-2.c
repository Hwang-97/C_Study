//예제1-2.c
/* 이 프로그램은 두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램 이다.*/

/*
	Standard Input/Output library 선언 
	stdio.h 헤더 파일은 여러 형의 입출력 함수가 포함된 헤더 파일이다.
*/
#include <stdio.h> 

/*
	pragma warning은 컴파일러에서 경고가 출력되는 방식을 바꿔줄때 사용한다.
	 
	c4996은 권장되지 않는 함수 사용에 관한 경고이고 ,
	disable 을 앞에 적어 해당 오류를 표시하지 않겠다고 선언한다.
*/ 
#pragma warning(disable:4996)

/*
	정수를 저장하는 변수 a, b, c 총 3개의 변수를 전역변수로 선언한다. 
*/
int a, b, c  ;

/*
	해당 함수가 main함수 이 후에 작성 될 것이기 떄문에
	main 함수에서 사용하기위해 사용자 함수의 원형을 먼저 선언해 준다. 
*/ 
int product(int x, int y);

/*
	main 함수를 반환값이 없는 void 형태로 선언한다. 
	해당 프로그램의 진입점이다. 
*/	
void main() {
	
	/* stdio.h파일 내부의 함수중 printf 함수를 이용해서 사용자에게 input 받을 첫번째 숫자 범위를 알려준다. */
	printf("Enter a number between 1 and 100 : ");
	
	/* stdio.h파일 내부의 함수중 scanf 함수를 이용해서 정수를 입력받고 이를 변수 a에 대입시킨다. */
	scanf("%d",&a);
	
	/* stdio.h파일 내부의 함수중 printf 함수를 이용해서 사용자에게 input 받을 두번쨰 숫자 범위를 알려준다. */
	printf("Enter aother number between 1 and 100 : ");
	
	/* stdio.h파일 내부의 함수중 scanf 함수를 이용해서 정수를 입력받고 이를 변수 b에 대입시킨다. */
	scanf("%d",&b);
	
	/* 사용자가 생성한 함수인 product(int x, int y) 에 a , b 값을 대입한 뒤 연산의 결과값을 돌려받는다. */
	c = product(a,b);
	
	/* stdio.h파일 내부의 함수중 printf 함수를 이용해서 사용자에게 입력받은 a 곱하기 b의 값을 출력한다.  */
	printf("%d * %d = %d\n",a,b,c);
	
/* 해당 프로그램이 끝나는 지점이다. */	
} 

/*
	사용자가 생성한 함수이며 두개의 파라미터를 넘겨받고 이를 곱한값을 return 한다. 
*/ 
int product(int x , int y) {
	
	/* 해당 함수의 종료 지점이다. */
	return (x * y); 
}














