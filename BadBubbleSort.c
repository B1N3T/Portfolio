#include <stdio.h>

int main()
{
  float aux;
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	
  /*Sorting Algorithm*/
	for(int i = 0; i < 20; i++){                    /* The higher the continuation condition is the more accurate your results are */       
	    while(numbers[i]<numbers[i+1]){
	        for(int i = 0; i <= 9; i++){            /* Can handle 10 numbers */
	            if(numbers[i]<numbers[i+1]){        /* Checks to see if the integer on the right is greater */
	                aux = numbers[i+1];
	                numbers[i+1] = numbers[i];
	                numbers[i] = aux;
	                for(int i = 0; i < 10; i++){    /* Prints out array of values after numbers were sorted */
	                    printf("%f ",numbers[i]);   
	                }
	                printf("\n");
	            }
	        }
	    }
    }
	return 0;
}
