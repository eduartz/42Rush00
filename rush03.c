#include <ft_putchar.c>
void rush(int x, int y)
{
    int b = 1;

    while (b <= y)
    {
        int a = 1;
        while (a <= x)
        {
            if(a == 1 || a == x || b == 1 || b == y)
            {
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
            else
            {
                ft_putchar(' ');
            }
            a++;
        }
        ft_putchar('\n');
        b++;
    }
       
}