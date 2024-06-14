#include <stdio.h>

void CheckRange(float fGrade, float fUpper, float fLower){
	if (fGrade >= fLower && fGrade <= fUpper){
		printf("CORRECT GRADE");	
	} else {	
		printf("INVALID GRADE");
	}
}

float GradeChecker(char cGrade, float fGrade){
	float fUpper, fLower;
	
	switch (cGrade){
		case 'A':
			fUpper = 100.00; 
			fLower = 97.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'B':
			fUpper = 96.99; 
			fLower = 94.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'C':
			fUpper = 93.99; 
			fLower = 91.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'D':
			fUpper = 90.99; 
			fLower = 88.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'E':
			fUpper = 87.99; 
			fLower = 85.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
				
		case 'F':
			fUpper = 84.99; 
			fLower = 82.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'G':
			fUpper = 81.99; 
			fLower = 80.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'H':
			fUpper = 79.99; 
			fLower = 78.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'I':
			fUpper = 77.99; 
			fLower = 70.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		case 'J':
			fUpper = 69.99; 
			fLower = 0.00;
			CheckRange(fGrade, fUpper, fLower);
			break;
			
		default:
			printf("NOT VALID");					
	}
	
	return 0;
}

int main(){
	char cGrade;
	float fGrade;
	
	printf("What is your letter grade?: ");
	scanf(" %c", &cGrade);
	
	printf("What is your grade?: ");
	scanf(" %f", &fGrade);
	
	GradeChecker(cGrade, fGrade);
	
	return 0;
}
