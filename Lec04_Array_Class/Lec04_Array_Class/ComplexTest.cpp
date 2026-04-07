#include "Complex.h"

void main() {
	Complex a, b, c,d;
	a.read("A =");
	b.read("B =");
	c.set(2.5, 10.2);
	c.add(a, b);
	d.multi(a, b);
	a.print("A = ");
	b.print("B = ");
	c.print("A + B = ");
	d.print("A * B = ");
}