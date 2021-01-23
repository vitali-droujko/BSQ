/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../include/my.h"

void print_algo(t_plan *plan)
{
    determinator_char(plan);
    recuperator(plan);

    int s = 0;
    int k = my_strlen(plan->comp[1]);
    while (plan->comp[s]) {
        write(1, plan->comp[s], k);
        write(1, "\n", 1);
        s++;
    }
}