#include "prime.h"

int IsPrime(int num){
	for(int i = num - 1; i > 1 ; i--){
		if(!(num % i)){
			return 0;
		} 
	}
	return 1;
}
