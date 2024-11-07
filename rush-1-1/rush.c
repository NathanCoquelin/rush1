/*
** EPITECH PROJECT, 2022
** rush-1-1
** File description:
** this will display a square of size x, y
*/

void my_putchar(char c);

void compute_border_lines (int y, int at_column)
{
    if (at_column == 1 || at_column == y)
        my_putchar('o');
    else
        my_putchar('-');
}

void compute_horizontal_sides(int y, int at_column)
{
    if (at_column == 1 || at_column == y)
        my_putchar('|');
    else
        my_putchar(' ');
}

void display_column(int x, int y, int at_line, int at_column)
{
    if (at_line == 1 || at_line == y)
        compute_border_lines(x, at_column);
    else
        compute_horizontal_sides(x, at_column);
}

void display_line(int x, int y, int at_line)
{
    for (unsigned int j = 1; j <= x; j++) {
        display_column(x, y, at_line, j);
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    for (unsigned int i = 1; i <= y; i++) {
        display_line(x, y, i);
        my_putchar('\n');
    }
}
