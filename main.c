#include <stdio.h>

float CountBudget(float fBudget, float *fAmount){
  char cChoice;
  
	if(*fAmount > fBudget) {
		printf("OVER BUDGET");
		
	} if(*fAmount < fBudget) {
		printf("This is in budget\n");
    printf("Would you like to add amount? (Y/N): "); 
    scanf("%c", &cChoice);
      if(cChoice == Y){
        AddAmount(&fAmount);
      }
		
	} if (*fAmount == fBudget) {
		printf("ENOUGH BUDGET");
	}
	
	return 0;	
}

float AddAmount(float *fIniAmount){
  float fNewAmount, fAmount;
  
  printf("What is the new amount?: );
  scanf("&f", fNewAmount);

  
  
}

int main(){
	float fAmount, fBudget;
	
	printf("What is the initial amount?: ");
	scanf(" %f", &fAmount);
	
	printf("What is the initial budget?: ");
	scanf(" %f", &fBudget);
	
	CountBudget(fBudget, &fAmount);
	
	return 0;
}
