/*
** EPITECH PROJECT, 2024
** 202
** File description:
** 202
*/

#include "../include/202.h"

int main(int ac, char **av)
{
    if (ac == 2 && strncmp(av[1], "-h", 2) == 0){
        usage();
        return 0;
    }else if (ac == 3){
        double a = atoi(av[1]);
        double b = atoi(av[2]);
        check_a_b(ac, av);
        printer(a, b);
        return 0;
    }else
        return 84;
}