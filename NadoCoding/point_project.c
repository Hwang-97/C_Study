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
		printf("��� ���׿� ���� �ֽðھ��?");
		scanf_s("%d",&num);
		
		if(num <1 || num >6){
			printf("\n�Է°��� �߸��Ǿ����ϴ�.");
			continue;
		}
		
		totalElapsedTime = (clock() - startTime)/1000;
		printf("�� ��� �ð� : %ld �� \n",totalElapsedTime);
//		getchar();

		preElapsedTime = totalElapsedTime - preElapsedTime;
		printf("�ֱ� ��� �ð� : %ld �� \n",preElapsedTime);
		
		decreaseWater(preElapsedTime);
		
		if(cursor[num-1] <=0){
			printf("%d ���� ���\n",num);
		}else if(cursor[num-1] + 1 <=100){
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n",num);
			cursor[num-1]+=1;
		}
		
		
		if(totalElapsedTime/20 > level-1)
		{
			level++;
			printf(" ***�� ������ %d >>>>> %d ",level-1,level);
		}
		
		if(level==5){
			printf("*** ���� ***");
			exit(0);
		}
		
		if(checkFishAlive() == 0){
			printf("��� ����� ���");
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
	
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n",1,2,3,4,5,6);
	
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












