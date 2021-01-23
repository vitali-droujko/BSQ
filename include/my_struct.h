/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** my struct
*/

#ifndef MY_STRUCT_H_
#define MY_STRUCT_H_

#define A1 plan->base[i][j - 1]
#define A2 plan->base[i - 1][j]
#define A3 plan->base[i - 1][j - 1]

typedef struct s_plan
{
    int test;
    int x;
    int y;
    char **comp;
    int **base;
    char *buff;
}	t_plan;

#endif /* MY_STRUCT_H_ */