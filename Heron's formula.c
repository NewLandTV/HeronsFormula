#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double s;
	double x;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	s = (a + b + c) / 2.0;
	x = sqrt(s * (s - a) * (s - b) * (s - c));
	
	printf("%lf", x);
	
	return 0;
}
