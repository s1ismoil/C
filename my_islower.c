#include <stdio.h>
#include <ctype.h>

int my_islower(char param_1){
    if (islower(param_1)){
        return 1;

    }else{
        return 0;
    }
}