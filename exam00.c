#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

/* LOGICA DE RUSH 00*/
void ft_sudrush00(int a, int b, int x, int y){
    if(a > 1 && a < x){
        ft_putchar('-');
    }
    else if(b > 1 && b < y){
        ft_putchar('|');
    }
    else{
        ft_putchar('o');
    }
}

void ft_rush00(int b, int x, int y){
    int a = 1;
    while (a <= x){
        if(a == 1 || a == x || b == 1 || b == y){
            ft_sudrush00(a, b, x, y);
        }
        else{
            ft_putchar(' ');
        }
        a++;
    }
}

/* LOGICA DE RUSH 01 */
void ft_rush01(int b, int x, int y){
    int a = 1;
    while(a <= x){
        if(a == 1 || a == x || b == 1 || b == y){
            if(a == 1 && b == 1 || b == y && a == x && b > 1 && a > 1){
                ft_putchar('/');
            }
            else if(a == x && b == 1 || b == y && a == 1){
                ft_putchar('\\');
            }
            else {
                ft_putchar('*');
            }
        }
        else{
            ft_putchar(' ');
        }
        a++;
    }
}

/* LOGICA DE RUSH 02 */
void ft_rush02(int b, int x, int y){
    int a = 1;
    while (a <= x){
        if(a == 1 || a == x || b == 1 || b == y){
            if(a == 1 && b == 1 || a == x && b == 1){
                ft_putchar('A');
            }
            else if(a == 1 && b == y || a == x && b == y){
                ft_putchar('C');
            }
            else{
                ft_putchar('B');
            }
        }
        else{
            ft_putchar(' ');
        }
        a++;
    }
}

/* LOGICA DE RUSH 03 */
void ft_rush03(int b, int x, int y){
    int a = 1;
    while (a <= x){
        if(a == 1 || a == x || b == 1 || b == y){
            if(a == 1 && b == 1 || a == 1 && b == y){
                ft_putchar('A');
            }
            else if(a == x && b == 1 || a == x && b == y){
                ft_putchar('C');
            }
            else{
                ft_putchar('B');
            }
        }
        else {
            ft_putchar(' ');
        }
        a++;
    }
}

/* LOGICA DE RUSH 04 */
void ft_rush04(int b, int x, int y){
    int a = 1;
    while(a <= x){
        if(a == 1 || a == x || b == 1 || b == y){
            if(a == 1 && b == 1 || b == y && a == x && b > 1 && a > 1){
                ft_putchar('A');
            }
            else if(a == x && b == 1 || b == y && a == 1){
                ft_putchar('C');
            }
            else {
                ft_putchar('B');
            }
        }
        else{
            ft_putchar(' ');
        }
        a++;
    }
}

void rush(int x, int y){
    int b = 1;
    while (b <= y){
        /* 
            CAMBIAR LA FUNCION SEGUN SE QUIERA A EJECUTAR 
            ft_rush00, ft_rush01, ft_rush02, ft_rush03, ft_rush04 
        */
        ft_rush00(b, x, y);
        ft_putchar('\n');
        b++;
    }
}

int main(){
    rush(5,3);
    ft_putchar('\n');
    rush(5,1);
    ft_putchar('\n');
    rush(1,1);
    ft_putchar('\n');
    rush(1,5);
    ft_putchar('\n');
    rush(4,4);
    return (0);
}