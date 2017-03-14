//c99
#include <stdlib.h>

int guess(char* in, char* ans, int digi);

int main(){
	char ans[5] = {0}, g[5] = {0};
	scanf(" %s", ans);
	while(1){
		scanf(" %s", g);
		int op = guess(g, ans, 4);
		if(!op) break;
	}
	return 0;
}

int guess(char* in, char* ans, int digi){
	int a = 0, b = 0;
	char aLst[5] = {0};
	
	//Count a
	for(int i = 0; i < digi; i++)
		if(in[i] == ans[i]){
			aLst[i] = in[i];
			a++;
		}
	//Count b
	for(int i = 0; i < digi; i++){
		int bAddFlag = 0;
		for(int j = 0; j < digi; j++){
			if((i != j) && (in[j] == ans[i])){
				//檢查是否有和符合a條件的數字重複 
				int ifExist = 0;
				for(int k = 0; k < digi; k++)
					if(in[j] == aLst[k]) ifExist = 1;
				if(!ifExist) bAddFlag = 1;
			}
		}
		//防止輸入重複數字被重複計算
		if(bAddFlag) b++;
	}
	
	if((a == 4) && (b == 0)){
		printf("%dA%dB\n", a, b);
		printf("You Win!\n");
		return 0;
	}
	else{
		printf("%dA%dB\n", a, b);
		return 1;
	}
}
