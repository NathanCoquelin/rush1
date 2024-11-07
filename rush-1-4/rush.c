/*
** EPITECH PROJECT, 2022
** rush-1-1
** File description:
** this will display a square of size x, y
*/

void my_putchar(char c);

void compute_border_lines (unsigned int *params)
{
    if (params[3] == 1 && params[4] == 1){
        my_putchar('A');
        return;
    } else if ( params[3] == params[1] && params[4] == 1) {
        my_putchar('C');
        return;
    }
    my_putchar('B');
}

void compute_horizontal_sides(unsigned int *params)
{
    if (params[3] == 1 || params[3] == params[1])
        my_putchar('B');
    else
        my_putchar(' ');
}

void decide_type(unsigned int *params)
{
    if (params[2] == 1)
        compute_border_lines(params);
    else if (params[2] == params[0])
        compute_border_lines(params);
    else
        compute_horizontal_sides(params);
}

void display_line(unsigned int *params)
{
    for (unsigned int j = 1; j <= params[1]; j++) {
        params[3] = j;
        decide_type(params);
    }
}

void rush(int x, int y)
{
    unsigned int params[5] = {y, x, 1, 1, 1};

    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (x == 1 || y == 1)
        params[4] = 0;
    for (unsigned int i = 1; i <= y; i++) {
        params[2] = i;
        display_line(params);
        my_putchar('\n');
    }
}
