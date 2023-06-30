#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)

function get_precision(format: string, i: number, list: any[]): number {
  let curr_i = i + 1;
  let precision = -1;
  if (format[curr_i] !== '.') {
    return precision;
  }
  precision = 0;
  for (curr_i += 1; curr_i < format.length; curr_i++) {
    if (isDigit(format[curr_i])) {
      precision *= 10;
      precision += parseInt(format[curr_i]);
    } else if (format[curr_i] === '*') {
      curr_i++;
      precision = list.shift();
      break;
    } else {
      break;
    }
  }
  i = curr_i - 1;
  return precision;
}
