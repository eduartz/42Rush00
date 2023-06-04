#include "ft_putchar.c"
void rush(int x, int y)
{
    int b = 1;
    while (b <= y){
        int a = 1;
        while (a <= x){
            if(a == 1 || a == x || b == 1 || b == y){
                if(a > 1 && a < x){
                    ft_putchar('-');
                }
                else{
                    if(b > 1 && b < y){
                        ft_putchar('|');
                    }
                    else{
                        ft_putchar('o');
                    }
                }
            }
            else{
                ft_putchar(' ');
            }
            a++;
        }
        ft_putchar('\n');
        b++;
    }  
}