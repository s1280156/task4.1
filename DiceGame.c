#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
        int i;
        int sum=0;
        srand(time(NULL));

        for(i=0;i<2;i++){
                int r=rand();
                printf("Die %d: %d\n",i+1,(r%6)+1);
                sum+=(r%6)+1;
        }
        printf("Total value: %d\n",sum);
        return 0;
}