#include <stdlib.h>
#include <stdio.h>

int main(){
	char c = ' ';
	while(1){
		c = getchar();
		putchar(c);
		if (c == 'q')
			break;
	}
	return 0;
}

