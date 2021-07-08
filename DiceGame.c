#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
        int i;
        int sum=0;
        char name[30];
        srand(time(NULL));

        printf("What is your name?\n");
        scanf("%s", name);
        printf("Hello,%s!\n", name);
        for(i=0;i<2;i++){
                int r=rand();
                printf("Die %d: %d\n",i+1,(r%6)+1);
                sum+=(r%6)+1;
        }
        printf("Total value: %d\n",sum);
        if (sum > 7) {
            printf("You won!");
        }
        else { printf("You lost"); }
        return 0;
}