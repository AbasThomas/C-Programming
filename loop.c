#include <stdio.h>

int main(){
//	int i;
//	for(i = 0; i <= 11; ++i){
//		printf("%d ", i)
//	}
	
	int num, count, sum=0;
	printf("enter a positive integer");
	scanf("%d", &num);
	
	
	for(count = 1; count <= num; ++count ){
		sum += count;
	}
	print("sum = %d", sum );
	
	return 0;
}


