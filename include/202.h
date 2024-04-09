/*
** EPITECH PROJECT, 2024
** 202
** File description:
** 202
*/

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
void print_ligne();
double form1_law(double a, double b, double x, double y);
double form2_law(double a, double b, double x);
double form3_law(double a, double b, double z);
double expect_X(double a, double b);
double expect_Y(double a, double b);
double expect_Z(double a, double b);
double var_X(double a, double b);
double var_Y(double a, double b);
double var_Z(double a, double b);
void print_probalities(int a, int b);
double form2_law_y(double a, double b, double x);
void print_proba_z(int a, int b);
void print_expect_AND_variance(double a, double b);
void printer(double a, double b);
void usage();
void check_a_b(int ac, char **av);