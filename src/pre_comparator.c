/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../include/my.h"

void pre_comparator(t_plan *plan, int i, int j)
{
    j = 1;
    while (plan->base[i][j] != -1) {
        if (plan->base[i][j] == 0)
            j++;
        else {
            plan->base[i][j] = comparator(A1, A2, A3);
            j++;
        }
        if (plan->base[i][j-1] > plan->test) {
            plan->test = plan->base[i][j - 1];
            plan->x = i;
            plan->y = j;
        }
    }
}