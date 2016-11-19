#include <stdio.h>
#include "math/mathFunctions.h"

#include "config.h"
#ifdef USE_MYMATH
  #include "math/MathFunctions.h"
#else
  #include 
#endif
int main(int argc, char *argv[])
{
	if (argc < 3){
			printf("Usage: %s base exponent \n", argv[0]);
			return 1;
	}
#ifdef USE_MYMATH
    printf("Now we use our own Math library. \n");
    double result = power(base, exponent);
#else
    printf("Now we use the standard library. \n");
    double result = pow(base, exponent);
#endif
	double result = power(base, exponent);
	printf("%g ^ %d is %g\n", base, exponent, result);
	return 0;
}
