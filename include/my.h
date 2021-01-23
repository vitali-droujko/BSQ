/*
** EPITECH PROJECT, 2020
** myh
** File description:
** myh
*/

#ifndef MY_H_
#define MY_H_

#include "my_struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
char *my_strcat(char *, char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);
char **my_str_to_word_array(char const *);
char *my_strdup(char const *);
char **premdimf(char const *);
char **secdimf(char const *);
int my_pow(int, int);
void determinator_int(t_plan *plan);
void determinator_char(t_plan *plan);
int deterline(t_plan *plan);
int comparator(int a, int b, int c);
void algo(t_plan *plan);
void ak(t_plan *plan, int i, int j, int a);
void determinator_int(t_plan *plan);
void determinator_char(t_plan *plan);
int comparator(int a, int b, int c);
void recuperator(t_plan *plan);
int deterline(t_plan *plan);
void print_algo(t_plan *plan);
void pre_comparator(t_plan *plan, int i, int j);
void algo(t_plan *plan);

#endif /* MY_H_ */