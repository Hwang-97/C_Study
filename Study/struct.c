#include <stdio.h>
#include <stdlib.h>

struct Gameinfo {
	
	char * name;
	int year ;
	int price ;
	char * company ;
	
	struct Gameinfo * friendGame;
};

int main (void) {
	
	struct Gameinfo gameinfo1;
	
	gameinfo1.name = "황현우";
	gameinfo1.year = 26;
	gameinfo1.price = 1000;
	gameinfo1.company = "사이버 라인";

	struct Gameinfo *point;
	point = &gameinfo1;
  	
	struct Gameinfo gameinfo2={"이유선",24,2000,"공무원"};
	
	gameinfo1.friendGame = &gameinfo2;
	
	printf("%s,%d,%d,%s 의 여자친구는 %s,%d,%d,%s"
    ,point->name,point->year,point->price,point->company
    ,point->friendGame->name,point->friendGame->year
    ,point->friendGame->price,point->friendGame->company); 
    
	return 0 ;
}
