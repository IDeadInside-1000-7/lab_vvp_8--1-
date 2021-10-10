#include <stdio.h>
#include <math.h>
void main()
{
	int Bt, kBt;
	printf("Enter your count of Bytes, then programm will convert it to KiloBytes ");
	printf("Bt = ");
	scanf("%i", &Bt);
	printf("In KiloBytes = ");
	kBt = Bt / 1024;
	printf("%.0i\n", kBt);
}