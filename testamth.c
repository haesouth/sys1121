/*log, sqrt, exp, pow
*/

#include<stdio.h>
#include<math.h>

int main(void){
	double x;
	printf("%10s%10s%10s%15s%20s\n",
			"x", "log(x)", "sqrt(x)", "exp(x)", "pow(10,0,x)");
		for(x=1; x<=10; x++)
		printf("%10.5f10.5f%10.5f%15.5f%20.5\n", x, log(X), sqrt(x), exp(x), pow(10.0, x));
}
