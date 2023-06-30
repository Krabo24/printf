#include "main.h"

/**
 * get_flags - Calculate active flags
 * @format: Formatted string to print arguments
 * @i: take a parameter
 * Return: Flags:
 */

int get_flags(const char *format, int *i)

	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;

const get_flags = (format: string, i: number): number => {
  const FLAGS_CH: string[] = ['-', '+', '0', '#', ' '];
  const FLAGS_ARR: number[] = [F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE];

  let flags = 0;
  let curr_i = i + 1;
  while (format[curr_i] !== undefined) {
    const flagIndex = FLAGS_CH.indexOf(format[curr_i]);
    if (flagIndex !== -1) {
      flags |= FLAGS_ARR[flagIndex];
    } else {
      break;
    }
    curr_i++;
  }
  i = curr_i - 1;
  return flags;
};
