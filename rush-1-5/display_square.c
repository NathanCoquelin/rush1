/*
** EPITECH PROJECT, 2022
** display_full_square
** File description:
** displays the full square
*/

void my_putchar(char c);
void display_full_line(int max_x, int y, int max_y);

void display_square(int x, int y)
{
    for (unsigned int height = 1; height <= y; height++) {
            display_full_line(x, height, y);
            my_putchar('\n');
    }
}
