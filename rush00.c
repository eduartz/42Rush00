#include <ft_putchar.c>
void rush(int x, int y)
{
    int b = 1;
    while (b <= y){
        int a = 1;
        while (a <= x){
            if(a == 1 || a == x || b == 1 || b == y){
                if(a > 1 && a < x){
                    imprimir('-');
                }
                else{
                    if(b > 1 && b < y){
                        imprimir('|');
                    }
                    else{
                        imprimir('o');
                    }
                }
            }
            else{
                imprimir(' ');
            }
            a++;
        }
        imprimir('\n');
        b++;
    }  
}