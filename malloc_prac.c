#include <stdio.h>
#include <stdlib.h>

int main()
{
	int memory;
	scanf("%d",&memory);
	int *ptr = (int *) malloc(memory);
	char arr[memory];
	
	if(memory>(1024*1024)){
	    printf("AAA Too Much Memory!!");
	}
	
	for(int i; i =< sizeof(memory); i++){
	    arr[*(ptr+i)] 
	}
	
	return 0;
}
