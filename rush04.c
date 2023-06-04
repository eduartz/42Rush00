#include <ft_putchar.c>
void rush(int x, int y)
{

    int b = 1;

    while(b <= y)
    {
        int a = 1;

        while(a <= x)
        {
            if(a == 1 || a == x || b == 1 || b == y){

                if(a == 1 && b == 1 || b == y && a == x && b > 1 && a > 1){
                    imprimir('A');
                }
                else if(a == x && b == 1 || b == y && a == 1){
                    imprimir('C');
                }
                else {
                    imprimir('B');
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