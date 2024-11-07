/*
** EPITECH PROJECT, 2022
** is_one
** File description:
** displays a single column or line if one of the param is equal to 0
*/

void my_putchar(char c);

void is_one(int x, int y)
{
    int saved_x = x;

    for (y; y >= 1; y--) {
        for (x; x >= 1; x--) {
            my_putchar('*');
        }
        my_putchar('\n');
        x = saved_x;
    }
}
