#include <stdlib.h>

void main(){
	double a, b, o;
	char op;
	scanf("%lf%lf %c", &a, &b, &op);
	switch(op){
		case '/':
			o = a / b;
			break;
		case '+':
			o = a + b;
			break;
		case '-':
			o = a - b;
			break;
		case '*': 
			o = a * b;
			break;
	}
	printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, o);
	return;
}

