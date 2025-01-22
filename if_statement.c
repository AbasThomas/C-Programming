//#include <stdio.h>
//int main(){
//	int number;
//	
//	printf("enter an integer");
//	scanf("%d, &integer");
//	
//	if (number < 0) {
//		printf("you entered %d.\n it is a negative number, number");
//	}
//	
//	else{
//			printf("you entered %d.\n it is a positive number, number ");
//	}
//	
//	
//	
//	return 0;
//}
//
////int main(){
////	printf("enter a number");
////	scanf( "%d, &number");
////	
////	if(number % 2){
////		printf("  you entered %d.\n it is an even number, number");
////	}
////	else{
////		prinf("you entered %d.\n it is an odd number, number ");
////	}
////}


#include <stdio.h>
 int main(){
 	int number1, number2;
 	printf("enter two integers");
 	scanf("%d %d", &number1, &number2);
 	 
 	 if(number1 == number2 ){
 	 	printf("Result: %d = %d", number1, number2);
	  }
	  
	 else if(number1 > number2 ){
 	 	printf("Result: %d > %d", number1, number2);
	  } 
	  
	  else{
 	 	printf("Result: %d < %d", number1, number2);
	  }
		return 0;
 }
