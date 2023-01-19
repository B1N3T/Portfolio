#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alphLoop = 0;
	int memory;
	scanf("%d",&memory);
	char* arr = (char*) malloc(sizeof(char)*memory);
    char alph[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	if(memory>(1024*1024)){
	    printf("AAA Too Much Memory!!");
	}else{
	    for(int i = 0; i < memory; i++){
            arr[i] = alph[alphLoop];
            printf("%c",arr[alphLoop]);
            alphLoop++;
            if(alphLoop > 25){
                alphLoop = 0;
            }
            if(i >= 400){
                break;
            }
        }
	}
	
	free(arr);
	return 0;
}
