#include<stdio.h>
#include<stdlib.h>
#include"divs.h"



int main(int argc, char *argv[]) {
    
    
    printf("Hello_World\n");
    
    printf("argc: %d\n",argc);
    
    printf("Arg0: %s\n",argv[0]);
    
    if (argc > 1){
        printf("Arg1: %s\n",argv[1]);
    } else {
    
        printf("No arguments supplied!\n");
    }


    if (argc >2){
    printf("Arg2: %s\n",argv[2]);
    }
    
    printf("the divisors of 20 are: ");
    divs(20);
    

    int array[5] = {5,15,25,35,45};

    for (int i = 0; i < 5; i++) {
        printf("index: %d; value: %d\n",i,*(array+i));
    }


    // array = {15,6,7,8,9}
    array[0] = 15;

    printf("index 0 :%d\n",array[0]);    

    int *arr = get_divs(20);

    printf("divisor 2 of 20 is: %d\n",arr[1]);
    
    free(arr);

    // [ ..... [23124124] [14124561] [5] [123132321123] [6]   .....] 
    // [0 ...     500         501    502       503     504    .....]
    int x = 5;
    int y = 6;

    int *xp = &x;
    int *yp = &y;

    printf("x_value = %d ;\t x_adress = %p\n",x,xp);
    printf("y_value = %d ;\t y_adress = %p\n",x,xp);

    x = *xp ;
    y = *yp ;    

    printf("x_value = %d ;\t x_adress = %p\n",x,xp);
    printf("y_value = %d ;\t y_adress = %p\n",y,yp);


    *xp = 12;
    *yp = 42;

    printf("x_value = %d ;\t x_adress = %p\n",x,xp);
    printf("y_value = %d ;\t y_adress = %p\n",y,yp);

} 
