////pointers / pointer vairables
//
////pointers are variables that store memory address
//#include <stdio.h>
//int main(){
////	int age = 20 ;
//	int *pc, c;
//	c = 5;
//	pc = &c;
//	*pc= 10;
//	printf("%d", c);
//	printf("\n%d", *pc);
////	printf("Age;: %d\n" ,age);`
////	printf("Address of age: %p", &age);
//
//int arr[4];
//int i;
//for(i = 0; i<4; i++){
//	printf("&arr[%d] = %p\n", &arr[i]);
//	
//	printf("addrees of array arr: %p\n" , arr );
//}
//}
//

int main(){
	int i, arr[6], sum = 0;
	printf("enter 6 numbers");
	
	for( i = 0; i < 6; i++){
		scanf("%d", arr+i);
		sum += *(arr+i);
	}
	printf("sum = %d\n", sum);
	
	int x[5] = {1,2,3,4,5};
	int *ptr;
	
	ptr = &x[1]
	
	printf("*ptr = %d\n", *ptr);
	printf("*(ptr + 1) = %d\n",( *ptr+1));
	printf("*(ptr +2) = %d\n",( *ptr+2));
	printf("*(ptr - 1) = %d\n",( *ptr-1));

}
