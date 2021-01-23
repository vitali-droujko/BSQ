/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** [file description here]
*/

#include "include/my.h"

void aread(t_plan *plan, char *av)
{
    int fd;
    int rd;
    struct stat d;
    char **base;
    stat(av, &d);

    plan->buff = malloc(sizeof(char) * d.st_size + 2);
    fd = open(av, O_RDONLY);
    rd = read(fd, plan->buff, d.st_size);
    plan->buff[rd] = '\0';

    return;
}

int main(int ac, char **av)
{
    t_plan *plan;
    plan = malloc(sizeof(t_plan));
    int s = 0;
    aread(plan, av[1]);
    determinator_int(plan);
    algo(plan);
    free(plan->buff);
    while (plan->comp[s]) {
        free(plan->comp[s]);
        free(plan->base[s]);
        s++;
    }
    free(plan->base[s]);
    free(plan->comp);
    free(plan->base);
    free(plan)
    ;
    return (0);
}

