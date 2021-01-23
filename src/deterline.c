/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../include/my.h"

int deterline(t_plan *plan)
{
    int i = 0;
    int j = 0;
    int h = 0;
    while (plan->buff[i] != '\n') {
        i++;
    }
    i++;
    j = i;
    while (plan->buff[i] != '\n')
        i++;
    h = i - j;
    return (i - j);
}