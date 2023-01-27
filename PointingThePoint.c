#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    int **ptrtab;
    scanf("%d",&rows);
    ptrtab = (int **) malloc (rows * sizeof (int *));
    
    if(rows>20){
        printf("Too Big");
    }
    
    for (int r = 0; r <=rows; r++){
        ptrtab[r] = (int *) malloc (rows * sizeof (int));
        printf("%d   ",r);
        for(int i = 1; i <= rows; i++){
            if(r!=0){
                printf("%d   ",i*r);    
            }
        }
        printf("\n");
    }
    
    free(ptrtab);
	return 0;
}
