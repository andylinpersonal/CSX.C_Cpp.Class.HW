#include <stdlib.h>
#include <stdio.h>

#define MAX_ARR 32

char* str_1x(int in);
size_t arrlen(int* in, size_t cnt);

int main(){
	int num, numlst[MAX_ARR] ={0};
	char *str_x[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
	char *str_x0[] = {"","","twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninty "};
	char *str_x00 = {"hundred "};
	char *str_order[] = {"", "thousand ", "million "};
	
	scanf("%d", &num);
	if((num > 1) && (9999999 > num)){
		int flag = num;
		//Tear down
		int i = 0;
		while(1){
			numlst[i++] = flag % 10;
			flag /= 10;
			if(!flag) break;
		}
		//group
		int size = (int)arrlen(numlst, sizeof(numlst)/sizeof(*numlst));
		int group = size / 3;
		int last = size % 3;
		if(last) group++;
		else last = 3;
			
		//print
		for(int i = group; i > 0; i--){
			while(last > 0){
				if((last == 3) && (numlst[((group - 1) * 3 + last - 1)] != 0)){
               	 	printf("%s", str_x[numlst[((group - 1) * 3 + last - 1)]]);
             	   	printf("%s", str_x00);
				}
				//¨¾¤îprint¥XªÅ¦r¦ê 
				else if((last == 2) && (numlst[((group - 1) * 3 + last - 1)] != 0)){
					if(numlst[((group - 1) * 3 + last - 1)] == 1){
						int tmp;
						tmp = numlst[((group - 1)*3 + last - 1)] * 10;
   		                last--;
                   		tmp += numlst[((group - 1)*3 + last - 1)];
                    	printf("%s", str_1x(tmp));
					}
					else
						printf("%s", str_x0[numlst[(group - 1) * 3 + last - 1]]);
				}
				else if((last == 1) && ((numlst[((group - 1)*3 + last - 1)] != 0))){
					//¨¾¤îprint¥XªÅ¦r¦ê 
					if(numlst[((group - 1)*3 + last - 1)])
						printf("%s", str_x[numlst[((group - 1)*3 + last - 1)]]);
				}
				last--;
			}
			//¨¾¤îprint¥XªÅ¦r¦ê 
            if(last != 1) printf("%s", str_order[(group - 1)]);
            last = 3;
            group--;
		}
		printf("dollars\n");
	} 
	else if(num == 1){
		printf("one dollar\n");
	}
	else {
		printf("input error\n");
	}
	return 0;
}

char* str_1x(int in){
	switch(in){
		case 10:
			return "ten ";
			break;
		case 11:
			return "eleven ";
			break;
		case 12:
			return "twelve ";
			break;
		case 13:
			return "thirteen ";
			break;
		case 14:
			return "fourteen ";
			break;
		case 15:
			return "fifteen ";
			break;
		case 16:
			return "sixteen ";
			break;
		case 17:
			return "seventeen ";
			break;
		case 18:
			return "eighteen ";
			break;
		case 19:
			return "nineteen ";
			break;
	}
}

size_t arrlen(int* in, size_t cnt){
	for(size_t i = cnt; i > 0; i--){
		if(in[(i - 1)] != 0){
			return i;
		}
	}
}
