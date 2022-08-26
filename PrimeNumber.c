#include <stdio.h>
int main(){
	int given_number,i,result = 0;
	printf("Please enter a positive integer ");
	scanf("%d", &given_number);
	if(given_number == 0 || given_number == 1){
		result = 1;
	}
	for (i=2; i <= given_number/2; i++){
		if(given_number % i ==0){
			result++;
			break;
		}
	}
		if(result == 0) {
		 printf("Given number is a prime number");
	}
	else{
		printf("Given number is not a prime number");
	}
		 return 0;
	}
