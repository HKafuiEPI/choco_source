/*
** EPITECH PROJECT, 2023
** B-MAT-400-COT-4-1-202unsold-aquilas.hounkanrin
** File description:
** prop_law.c
*/

#include "../include/202.h"

double form1_law(double a, double b, double x, double y)
{
    double res = 0.0;
    double nom = 0.0;
    double denom = 0.0;

    nom = (a - x) * (b - y);
    denom = ((5 * a) - 150) * ((5 * b) - 150);
    if (denom == 0.0)
        exit(84);
    else
        res = nom/denom;
    return res;
}

double form2_law(double a, double b, double x)
{
    double res = 0.0;
    for (double y = 10; y <= 50; y += 10){
        res += form1_law(a, b, x, y);
    }
    return res;
}


double form2_law_y(double a, double b, double x)
{
    double res = 0.0;
    for (double y = 10; y <= 50; y += 10){
        res += form1_law(a, b, y, x);
    }
    return res;
}

double form3_law(double a, double b, double z)
{
    double res = 0.0;
    for (double x = 10; x <= 50; x += 10){
        for (double y = 10; y <= 50; y += 10){
            if (x + y  == z){
                res += form1_law(a, b, x, y);
            }
        }
    }
    return res;
}

double expect_X(double a, double b)
{
    double res = 0.0;
    for (double y = 10 ; y <= 50; y += 10){
        for(double x = 10; x <= 50; x += 10){
            res += x * form1_law(a, b, x, y);
        }
    }
    return res;
}

double expect_Y(double a, double b)
{
    double res = 0.0;
    for (double x = 10; x <= 50; x += 10){
        for(double i = 10; i <= 50; i += 10){
            res += i * form1_law(a, b, x, i);
        }
    }
    return res;
}

double expect_Z(double a, double b)
{
    double res = 0.0;
    for (double  i = 20; i <= 100; i += 10){
        res += i * form3_law(a, b, i);
    }
    return res;
}

double var_X(double a, double b)
{
    double res = 0.0;
    double res1 = pow(expect_X(a, b), 2);
    double tot = 0.0;
    for (double y = 10 ; y <= 50; y += 10){
        for(double i = 10; i <= 50; i += 10){
            res += pow(i,2) * form1_law(a, b, i, y);
        }
    }
    tot = res-res1;
    return tot;
}

double var_Y(double a, double b)
{
    double res = 0.0;
    double res1 = pow(expect_Y(a,b), 2);
    double tot = 0.0;
    for (double x = 10; x <= 50; x += 10){
        for(double i = 10; i <= 50; i += 10){
            res += pow(i,2) * form1_law(a, b, x, i);
        }
    }
    tot = res - res1;
    return tot;
}

double var_Z(double a, double b)
{
    double res = 0.0;
    double res1 = pow(expect_Z(a, b), 2);
    double tot = 0.0;
    for (double  i = 20; i <= 100; i += 10){
        res += pow(i,2) * form3_law(a, b, i);
    }
    tot = res - res1;
    return tot;
}

