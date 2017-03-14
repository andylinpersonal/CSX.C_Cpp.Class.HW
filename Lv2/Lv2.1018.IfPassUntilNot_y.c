#include <stdlib.h>

int main(){
	char c;
	int sc;
	while(1){
		scanf(" %d", &sc);
		if(sc >= 60)
			printf("pass\n");
		else
			printf("fail\n");
		scanf(" %c", &c);
		if(c != 'y')
			break;
	}
	return 0;
}

