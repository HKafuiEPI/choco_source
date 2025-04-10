/*
** EPITECH PROJECT, 2024
** 202
** File description:
** 202
*/

#include "../include/202.h"

void print_ligne()
{
    printf("--------------------------------------------------------------------------------\n");
}

void print_probalities(int a, int b)
{
    printf("\tX=10\tX=20\tX=30\tX=40\tX=50\tY law\n");
    for (int y = 10; y <= 50; y += 10)
    {
        printf("Y=%d\t", y);
        for (int x = 10; x <= 50; x += 10)
        {
            printf("%.3f\t", form1_law(a, b, x, y));
        }
        printf("%.3f\n", form2_law_y(a, b, y));
    }
    printf("X law\t");
    for (int x = 10; x <= 50; x += 10)
    {
        printf("%.3f\t", form2_law(a, b, x));
    }
    printf("1.000\n");
}

void print_proba_z(int a, int b)
{
    printf("z\t20\t30\t40\t50\t60\t70\t80\t90\t100\np(Z=z)\t");
    for (int z = 20; z <= 100; z += 10)
    {
        printf("%.3f", form3_law(a, b, z));
        if (z != 100)
            printf("\t");
    }
    printf("\n");
}

void print_expect_AND_variance(double a, double b)
{
    printf("expected value of X:\t%.1f\n", expect_X(a, b));
    printf("variance of X:\t\t%.1f\n", var_X(a, b));
    printf("expected value of Y:\t%.1f\n", expect_Y(a, b));
    printf("variance of Y:\t\t%.1f\n", var_Y(a, b));
    printf("expected value of Z:\t%.1f\n", expect_Z(a, b));
    printf("variance of Z:\t\t%.1f\n", var_Z(a, b));
    printf("expected value of X:\t%.1f\n", expect_X(a, b));
    printf("variance of X:\t\t%.1f\n", var_X(a, b));
    printf("expected value of Y:\t%.1f\n", expect_Y(a, b));
    printf("variance of Y:\t\t%.1f\n", var_Y(a, b));
    printf("expected value of Z:\t%.1f\n", expect_Z(a, b));
    printf("variance of Z:\t\t%.1f\n", var_Z(a, b));
    printf("expected value of X:\t%.1f\n", expect_X(a, b));
    printf("variance of X:\t\t%.1f\n", var_X(a, b));
    printf("expected value of Y:\t%.1f\n", expect_Y(a, b));
    printf("variance of Y:\t\t%.1f\n", var_Y(a, b));
    printf("expected value of Z:\t%.1f\n", expect_Z(a, b));
    printf("variance of Z:\t\t%.1f\n", var_Z(a, b));
    printf("expected value of X:\t%.1f\n", expect_X(a, b));
    printf("variance of X:\t\t%.1f\n", var_X(a, b));
    printf("expected value of Y:\t%.1f\n", expect_Y(a, b));
    printf("variance of Y:\t\t%.1f\n", var_Y(a, b));
    printf("expected value of Z:\t%.1f\n", expect_Z(a, b));
    printf("variance of Z:\t\t%.1f\n", var_Z(a, b));
}

void printer(double a, double b)
{
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
    print_ligne();
    print_probalities(a, b);
    print_ligne();
    print_proba_z(a, b);
    print_ligne();
    print_expect_AND_variance(a, b);
    print_ligne();
}