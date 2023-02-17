#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//Clear the octet
int clear(char octet[3]){
    for(int i = 0; i < 3;i++){
        octet[i] = 0;
    };
}
//Check if Digits are between 0 and 255
char value_check(char num_string[]){
    int octet = atoi(num_string);
    if(octet <= 255 && octet >= 0 && isdigit){
        return(1);
    }else{
        return(0);   
    }
}

int main()
{
    char ip_address[16];
    char octet[3];
    int count = 0;
    int dot_count = 0;
    bool ip_validity;
    
    //Ask for the IP Address
	printf("Enter An IP Address: \n");
	scanf("%[^\n]s",ip_address);
	
	//Loop for the check
	for(int i = 0; i < 16; i++){
	    if(ip_address[i]=='.' || ip_address[i]=='\0'){
	        ip_validity = value_check(octet);
	        count = 0;
	        if(ip_address[i]=='.'){
	            dot_count +='.';
	        }
	        clear(octet);
	        //Check to see if output of check is false
	        if(ip_validity==0){
	            printf("%s is not a valid IP address",ip_address);
	            return(0);
	        }
	    }else{
	        octet[count] = ip_address[i];
	        count++;
	    };
	};
	//Final Dot Count Check
	if(dot_count == 3*'.'){
	    printf("%s is a valid IP address",ip_address);;
	}else{
	    printf("Error Not Enough Octets: %d",dot_count);
	}
	return(0);
}
