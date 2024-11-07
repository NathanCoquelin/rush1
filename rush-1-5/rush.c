/*
** EPITECH PROJECT, 2022
** rush
** File description:
** displays a square
*/

void my_putchar(char c);
void is_one(int x, int y);
void error_message(void);
void display_square(int x, int y);

void display_line_char(int pos, int max_x, int y, int max_y)
{
    if ((pos == 1 && y == 1) || (pos == max_x && y == max_y)) {
        my_putchar(65);
    } else if ((pos == max_x && y == 1) || (pos == 1 && y == max_y)) {
        my_putchar(67);
    } else {
        my_putchar(66);
    }
}

void display_column_char(int pos, int max_x)
{
    if (pos == 1 || pos == max_x) {
        my_putchar(66);
    } else {
        my_putchar(' ');
    }
}

void display_line(int pos, int max_x, int y, int max_y)
{
    if (y == 1 || y == max_y) {
        display_line_char(pos, max_x, y, max_y);
    } else {
        display_column_char(pos, max_x);
    }
}

void display_full_line(int max_x, int y, int max_y)
{
    for (unsigned int pos = 1; pos <= max_x; pos++) {
        display_line(pos, max_x, y, max_y);
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        error_message();
        return;
    }
    if (x == 1 || y == 1) {
        is_one(x, y);
    } else if (x > 1 && y > 1) {
        display_square(x, y);
    }
}
