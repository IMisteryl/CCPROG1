#include <stdio.h>

//Checks if the budget is overbudget or in the budget and asks the user if they would like to add
float CheckBudget(float fBudget, float *fAmount, char *cChoice) {
  
	if(*fAmount >= fBudget) {
		printf("Overbudget\n");
		*cChoice = 'N';
		
	} if(*fAmount < fBudget) {
		printf("This is in budget\n");

		//printf("%.2f\n", *fAmount); //(This is to check if the amount has been updated)
    	printf("Would you like to add amount? (Y/N): "); 
    	scanf(" %c", cChoice);
	}

	return 0;
}

//Asks the user the amount they would like to add and adds it to initial amount
void AddAmount(float fBudget, float *fIniAmount, char cChoice){
  float fNewAmount;
  
  printf("How much would you like to add to the amount?: ");
  scanf(" %f", &fNewAmount);

  *fIniAmount += fNewAmount;

  CheckBudget(fBudget, fIniAmount, &cChoice); //loops back to checking the budget

 	if (cChoice == 'Y' || cChoice == 'y'){  //loops AddAmount if user chooses to add to amount
		AddAmount(fBudget, fIniAmount, cChoice);
	}

	if (cChoice == 'N' || cChoice == 'n'){ //Exits after adding amount if user chooses N
		printf("Exiting...");
	}
} 

int main(){
	float fAmount, fBudget;
	char cChoice = 'N';

	printf("What is the budget?: ");
	scanf(" %f", &fBudget);
	
	printf("What is the initial amount?: ");
	scanf(" %f", &fAmount);
	
	CheckBudget(fBudget, &fAmount, &cChoice);
	
	if (cChoice == 'Y' || cChoice == 'y'){  //Initially starts to add amount if user chooses to do so
		AddAmount(fBudget, &fAmount, cChoice);
	}

	if (cChoice == 'N' || cChoice == 'n'){ //Exits if user chooses to not add amount
		printf("Exiting...");
	}

	return 0;
}
