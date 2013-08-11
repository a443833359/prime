#include "prime.h"
int isprime(int temp){
	for(int i=2;i<temp;i++)
		if(!(temp % i))
			return 0;
	return 1;
}
