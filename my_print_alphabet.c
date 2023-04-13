#include <stdio.h>
#include <ctype.h>
void my_putchar(char c){
    for (char i = c; i<= 'z'; i++){
        write (1, &i, 1);
    }
    write (1, "\n", 1);
}
void my_print_alphabet(){
    my_putchar('a');
}