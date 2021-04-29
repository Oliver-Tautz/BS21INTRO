#include<stdio.h>
#include<stdlib.h>



void divs (int n) {




    for (int i = 1; i <= n ;i++) {
        if ((n % i) == 0){
            printf("%d ",i);    
        }
    }

    printf("\n"); 
}

int *get_divs(int n) {

    // [ .... [1232] [12345151] [3412] ... [231223] [1234123] ...  ] //
    // [ ....   5        6        7           104      105    ...  ] 

    int *divs = malloc(100*sizeof(int));

    int j = 0;

    for (int i = 1; i <= n ;i++) {
            if ((n % i) == 0){
                divs[j] = i;    
                j++;
            }
    }
    
    for (int i = 0; i < j; i++){
        printf("%d ", divs[i]);
    }  

    printf("\n");
    
    return divs;
}

