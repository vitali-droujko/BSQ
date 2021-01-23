/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../include/my.h"

void ak(t_plan *plan, int i, int j, int a)
{
    (plan->buff[a] == '.') ? (plan->base[i][j] = 1) : 0;
    (plan->buff[a] == 'o') ? (plan->base[i][j] = 0) : 0;
}