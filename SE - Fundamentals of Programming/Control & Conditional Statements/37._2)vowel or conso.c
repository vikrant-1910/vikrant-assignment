// 2). Vowel or Consonant using switch case.

#include<stdio.h>
main()
{
	char Alphabet;
	
	printf("Enter the Alphabet :");
	scanf("%c",&Alphabet);
	
	switch(Alphabet)
	{
		case 'A':
			printf("A is Vowel");
			break;
			
		case 'E':
		    printf("E is Vowel");
			break;
			
		case 'I':
		    printf("I is Vowel");
			break;
			
		case 'O':
		    printf("O is Vowel");
			break;
			
		case 'U':
		    printf("U is Vowel");
			break;
			
		default:
		printf("Consonants");					
	}
}
