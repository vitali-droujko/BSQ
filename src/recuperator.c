/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** recuperator
*/

#include "../include/my.h"

void recuperator(t_plan *plan)
{
    int i = plan->x + 1;
    int j = plan->y;
    int a = plan->test;
    int b = plan->test;
    while (a != 0) {
        b = plan->test;
        while (b != 0) {
            plan->comp[i - a][j - b] = 'x';
            b--;
        }
        a--;
    }
}