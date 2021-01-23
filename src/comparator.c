/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "../include/my.h"

int comparator(int a, int b, int c)
{
    if ((a == b) && (b == c))
        return (a + 1);
    if ((a <= b) && (a <= c))
        return (a + 1);
    if ((b <= a) && (b <= c))
        return (b + 1);
    if ((c <= b) && (c <= a))
        return (c + 1);
}