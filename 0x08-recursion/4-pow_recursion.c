#include "holberton.h"
#include <math.h>
/**
 * pow - Retun value of x raised to the power of y.
 * @x: is a given number
 * @y: is a given number
 */
 int _pow_recursion(int x, int y)
 {
  if (y < 0){
    return (-1);
  }
  if (y == 0){
    return (-1);
  }
  return (pow(x, y));
 }
 
