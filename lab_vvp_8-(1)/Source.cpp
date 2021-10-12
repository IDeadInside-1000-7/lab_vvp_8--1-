#include <stdio.h>
#include <math.h>
int main()
{
	float Bt, kBt;
	printf("Enter your count of Bytes, then programm will convert it to KiloBytes ");
	printf("Bt = ");
	scanf("%f", &Bt);
	printf("In KiloBytes = ");
	kBt = Bt / 1024;
	kBt = ceil(kBt);
	printf("%f", kBt);
}
