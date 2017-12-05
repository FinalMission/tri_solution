#include <stdio.h>
#include "trisol.h"
#pragma warning (disable:4996)


_circle c[3] = { { 0, 0, 1 }, { 1, 4, 1 }, { 2, 0, 1 } };

int main(int argc, char ** argv) {

	_dot d;
	_solve_position(c, &d);

	printf("x = %.2f\ny = %.2f", d.x, d.y);
	return 0;
}
