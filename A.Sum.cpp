#include <stdio.h>

int main(void){

    int i, n, cont = 0;

    scanf("%i",&n);

    printf("\n");

    while( cont < n){
        int num[3];

        for( i = 0; i < 3; i++ ){
            printf("\n");
            scanf("%i",&num[i]);
        }

        if( num[0] + num[1] == num[2] ){
            printf("YES");
        }else if( num[1] + num[2] == num[0]){
            printf("YES");
        }else if( num[0] + num[2] == num[1]){
            printf("YES");
        }else{
            printf("NO");
            }

            cont++;
    }   
      
    return 0;
}
