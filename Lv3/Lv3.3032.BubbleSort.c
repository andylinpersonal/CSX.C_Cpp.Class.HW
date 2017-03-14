#include <stdlib.h>
#define COUNT 5

void bubble(int* in, size_t cnt);

int main(){
	int num[COUNT] = {0};
	for(int i = 0; i < COUNT; i++)
		scanf("%d", &num[i]);
	bubble(num, (sizeof(num)/sizeof(*num)));
	for(int i = 0; i < COUNT; i++){
		if(i != COUNT - 1) printf("%d ", num[i]);
		else printf("%d \n", num[i]);
	}
	return 0;
}
void bubble(int* in, size_t cnt){
	if(cnt == 1) return;
	for(int i = 1; i < cnt; i++){
		if(*(in + i) < *(in + i - 1)){
			*(in + i) ^= *(in + i - 1);
			*(in + i - 1) ^= *(in + i);
			*(in + i) ^= *(in + i - 1);
		}
	}
	bubble(in, --cnt);
}
