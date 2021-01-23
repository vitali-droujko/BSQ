/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** bsq annexe 2
*/

#include "../include/my.h"

void determinator_int(t_plan *plan)
{
    int a = 0, i = 0, j = 0;
    int len_line = deterline(plan);

    while ((plan->buff[a] >= 48) && (plan->buff[a] <= 57))
        a++;
    a++;
    plan->base = malloc(sizeof(int *) * (my_getnbr(plan->buff) + 5));
    while (plan->buff[a] != '\0') {
        plan->base[i] = malloc(sizeof(int) * (len_line + 5));
        j = 0;
        while (plan->buff[a] != '\n') {
            ak(plan, i, j, a);
            a++, j++;
        }
        plan->base[i][j] = -1;
        i++, a++;
    }
    plan->base[i] = malloc(sizeof(int) * (len_line + 5));
    plan->base[i][0] = -1;
}

void determinator_char(t_plan *plan)
{
    int a = 0, i = 0, j = 0;
    int len_line = deterline(plan);

    while ((plan->buff[a] >= 48) && (plan->buff[a] <= 57))
        a++;
    a++;
    plan->comp = malloc(sizeof(char *) * (my_getnbr(plan->buff) + 1));
    while (plan->buff[a] != '\0') {
        plan->comp[i] = malloc(sizeof(char) * (len_line + 1));
        j = 0;
        while ((j + 1) % (len_line + 1) != 0) {
            plan->comp[i][j] = plan->buff[a];
            a++;
            j++;
        }
        plan->comp[i][j] = '\0';
        i++;
        a++;
    }
    plan->comp[i] = NULL;
}


