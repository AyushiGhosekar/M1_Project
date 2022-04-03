#include<stdio.h>

int random_number(int max_value)
{
    int random_value;

    if (random_value < 0) {
    return (-1 * random_value % max_value + 1);
  }
  else {
    return (random_value % max_value + 1);
  }
}