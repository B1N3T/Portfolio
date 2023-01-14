#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int place = 0;
    int dots[3];
	char address[14];
	printf("Please Enter an IP Address: \n");
	scanf("%s",address);
	
	if(strlen(address)> 15){
	    printf("Error: not a valid address.");
	    return 0;
	}
	
	for(int i = 0; i < strlen(address); i++){
	    if(!isdigit(address[i]) && address[i] != '.'){
            printf("Error: not a valid address.");
            return 0;
	   }else if(address[i] == '.'){
	       dots[place] = i;
	       place++;
	   }
    }

    for(int i = 0; i < 3; i++){
        printf("Last %d parts: ",i+1);
        for(int rangeI = dots[i]+1; rangeI < strlen(address); rangeI++){
            printf("%c",address[rangeI]);
        }
        printf("\n");
    } 
    
	return 0;
}
