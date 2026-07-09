# include <stdio.h>
# define pi 3.14

int main() {
	double r, h, vol;

	scanf("%lf%lf", &r, &h);
	vol = pi * (r * r) * h / 3;
	printf("%.2lf\n", vol);

	return 0;
}