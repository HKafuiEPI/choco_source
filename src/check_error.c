/*
** EPITECH PROJECT, 2023
** B-MAT-400-COT-4-1-202unsold-aquilas.hounkanrin
** File description:
** check_error.c
*/

#include "../include/202.h"

void check_a_b(int ac, char **av)
{
    for (int i = 1; i < (ac - 1); i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (!isdigit(av[i][j]))
                exit(84);
        }
    }
    if (atoi(av[1]) < 50 || atoi(av[2]) < 50)
        exit(84);
}

void usage()
{
    printf("USAGE\n\t./202unsold a b\n");
    printf("DESCRIPTION\n");
    printf("\ta \t\tconstant computed from past results\n");
    printf("\tb \t\tconstant computed from past results\n");
}