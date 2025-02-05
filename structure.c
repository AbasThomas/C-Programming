#include <stdio.h>
#include <string.h>

//structure snytax

//struct structureName{
//	dataType member1;
//	dataType member2
//};

struct bank {
	char name[50];
	int accNumber;
	float balance;
};person1, person2 ;

int main(){
//	assign values for person1
	strcpy(person1.name, "Michael Sofield")
	person1.accNYmber = 20034559794;
	person.balance = 5000;
	
//	assign values for person 2
	strcpy(person2.name, "johan Sofield")
	person2.accNYmber = 345792987324;
	person2.balance = 7500;
	
	
	printf("Account Holder: %s\n", person1.name);
	printf("Account Number: %d\n", person1.accNumber);
	printf("balance : %s\n", person1.balance);

	
	printf("Account Holder: %s\n", person2.name);
	printf("Account Number: %d\n", person2.accNumber);
	printf("balance : %s\n", person2.balance);

}
