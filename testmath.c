/*log, sqrt, exp, pow의 값을 계산하여 표시하시오
*20181843 남해나
*/

#include<stdio.h>
#include<math.h>

int main(void){ /*산술함수*/
	double x;
	printf("%10s%10s%10s%15s%20s\n",
			"x", "log(x)", "sqrt(x)", "exp(x)", "pow(10,0,x)");
		for(x=1; x<=10; x++)
		printf("%10.5f%10.5f%10.5f%15.5f%20.5f\n", x, log(x), sqrt(x), exp(x), pow(10.0, x));
}
