#include <stdio.h>

int main(){
	int sum = 0;
	for(int i = 1; i <= 10; i++){
		sum += i;
	}
	printf("The sum is %d", sum);

	return 0;
}