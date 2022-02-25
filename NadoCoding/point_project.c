#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int i;
int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);

int main_pointer(void){
	
	long startTime = 0;
	long totalElapsedTime = 0;
	long preElapsedTime = 0;
	
	int num;
	initData();
	
	cursor = arrayFish;
	
	startTime = clock();
	
	while(1){
		printFishes();
		printf("몇번 어항에 물을 주시겠어요?");
		scanf_s("%d",&num);
		
		if(num <1 || num >6){
			printf("\n입력값이 잘못되었습니다.");
			continue;
		}
		
		totalElapsedTime = (clock() - startTime)/1000;
		printf("총 경과 시간 : %ld 초 \n",totalElapsedTime);
//		getchar();

		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("최근 경과 시간 : %ld 초 \n",preElapsedTime);
		
		decreaseWater(preElapsedTime);
		
		if(cursor[num-1] <=0){
			printf("%d 물고가 사망\n",num);
		}else if(cursor[num-1] + 1 <=100){
			printf("%d 번 어항에 물을 줍니다.\n\n",num);
			cursor[num-1]+=1;
		}
		
		
		if(totalElapsedTime/20 > level-1)
		{
			level++;
			printf(" ***축 레벨업 %d >>>>> %d ",level-1,level);
		}
		
		if(level==5){
			printf("*** 성공 ***");
			exit(0);
		}
		
		if(checkFishAlive() == 0){
			printf("모든 물고기 사망");
			exit(0);
		}else{
			
		}
		preElapsedTime = totalElapsedTime;
	}
	
	return 0;
}

void initData(){
	
	level = 1;
	for(i = 0; i <6 ; i++){
		arrayFish[i] = 100;
	}
}

void printFishes(){
	
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n",1,2,3,4,5,6);
	
	for(i = 0 ; i<6;i++){
		printf(" %4d ",arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime){
	
	for(i=0;i<6;i++){
		arrayFish[i]-=(level*3*(int)elapsedTime);
		if(arrayFish[i]<0){
			arrayFish[i]=0;
		}
	}
	
}

int checkFishAlive(){
	for(i=0;i<6;i++){
		if(arrayFish[i]>0){
			return 1;
		}
	}
	
	return 0;
}












