#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(int argc , char * argv[]){

	int i;
	char* text;
	text = (char*)malloc(50*sizeof(char)); 
	text = argv[1];
	// A ~ Z 65 ~ 90
	// a ~ z 97 ~ 122
	if((int)text[0]>=97 && (int)text[0]<=122){
		text[0] =(char)((int)text[0]-32);
	}
	if((int)text[strlen(text)]>=97 && (int)text[strlen(text)]<=122){
		text[strlen(text)] =(char)((int)text[strlen(text)]-32);
	}
	for(i=1;i<strlen(text)-1;i++){
		if((int)text[i]==95){
			i++;
			if((int)text[i]>=97 && (int)text[i]<=122){
				text[i] =(char)((int)text[i]-32);
			}
		}
	}	
	printf("%s\n",text);
	text = NULL;
	free(text);

}
