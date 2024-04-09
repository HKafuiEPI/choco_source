/*
** EPITECH PROJECT, 2023
** B-MAT-400-COT-4-1-202unsold-aquilas.hounkanrin
** File description:
** unit_test.c
*/

#include "../../include/202.h"
# include <criterion/criterion.h>
# include <criterion/redirect.h>
#include <stdlib.h>

Test(form1_law, basic_test)
{
    double result = form1_law(60, 70, 10, 20);
    cr_assert_float_eq(form1_law(60, 70, 10, 20), 0.083, 0.001);
}

Test(form2_law, basic_test)
{
    double result = form2_law(60, 70, 20);
    cr_assert_float_eq(form2_law(60, 70, 20), 0.267,0.001);
}

Test(form2_law_y, basic_test)
{
    double result = form2_law_y(60, 70, 10);
    cr_assert_float_eq(form2_law_y(60, 70, 10), 0.300, 0.001);
   
}

Test(form3_law, basic_test)
{
    double result = form3_law(60, 70, 20);
    cr_assert_float_eq(form3_law(60, 70, 20), 0.100, 0.001);
}

Test(expect_X, basic_test)
{
    double result = expect_X(60, 70);
    cr_assert_float_eq(expect_X(60, 70), 23.3,0.1);
}

Test(expect_Y, basic_test)
{
    double result = expect_Y(60, 70);
    cr_assert_float_eq(expect_Y(60.0, 70.0), 25.0,0.1);
}

Test(expect_Z, basic_test)
{
    double result = expect_Z(60, 70);
    cr_assert_float_eq(expect_Z(60.0, 70.0), 48.3,0.1);
}

Test(var_X, basic_test)
{
    double result = var_X(60, 70);
    cr_assert_float_eq(var_X(60.0, 70.0), 155.6,0.1);
}

Test(var_Y, basic_test)
{
    double result = var_Y(60, 70);
    cr_assert_float_eq(result, 175.0, 0.1);
}

Test(var_Z, basic_test)
{
    double result = var_Z(60, 70);
    cr_assert_float_eq(var_Z(60, 70), 330.6, 0.1);
    double result1 = var_Z(60, 60);
    cr_assert_float_eq(var_Z(60, 60), 311.1, 0.1);
}
