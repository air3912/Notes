# include <stdio.h>

int main() {
	double cost, price;

	scanf("%lf", &cost);

	if (cost < 200)
		price = cost * 0.5;
	else if (cost < 300)
		price = 100 + (cost - 200) * 0.6;
	else
		price = 160 + (cost - 300) * 0.8;

	printf("%.2lf\n", price);

	return 0;
}