/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** my algo
*/

#include "../include/my.h"

void algo(t_plan *plan)
{
    int i = 1;
    int j = 1;
    plan->x = 0;
    plan->y = 0;
    plan->test = 0;
    while (plan->base[i][0] != -1) {
        pre_comparator(plan, i, j);
        i++;
    }
    print_algo(plan);
}