#include "main.h"
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n)
{
int digit, mult, result;
if (n <= 15 && n >= 0)
{
for (digit = 0; digit <= n; digit++)
{
_putchar('0');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
result = digit * mult;
if (result <= 99)if (result <= 99)

