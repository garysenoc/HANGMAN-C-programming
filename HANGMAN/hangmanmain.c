#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hangman.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char choice = '0';
	int numOfChar;
	char guess[100];
	char toguess[100];
	char usedletters[26];
	int mistakes=0,turn=0,i;
	char c;
	while(choice !='3'){
		mistakes=0;
		turn =0;
		system("cls");
			menu();
			
			choice = getch();
			
			switch(choice){
				case '1': 
				
				start();
				
				gotoxy(42,17);printf("Enter how many characters [1 - 8]: ");
				scanf("%d",&numOfChar);
				while(numOfChar <1 || numOfChar > 8){
				gotoxy(42,18);	printf("Invalid number. Only [1 - 8] Try again!");getch();
					start();
					gotoxy(42,17);printf("Enter how many characters [1 - 8]: ");
					scanf("%d",&numOfChar);
				}
				fflush(stdin);
				gotoxy(42,19);printf("Enter word to be guess: ");
				scanf("%s",guess);
				
				while(strlen(guess) !=numOfChar){
					gotoxy(42,20);	printf("number of characters are exceeded/lacked.Try again!");getch();
					start();
					gotoxy(42,17);printf("Enter how many characters [1 - 8]: %d",numOfChar);
					gotoxy(42,19);printf("Enter word to be guess: ");
					scanf("%s",guess);
				}
				caps(numOfChar,guess);
				init(numOfChar,toguess);
				
				while(mistakes!=9){
					
						
					
					if(mistakes==0)
						hangmanbox1(numOfChar,toguess,usedletters,turn);
					else if(mistakes==1)
						hangmanbox2(numOfChar,toguess,usedletters,turn);
					else if(mistakes==2)
						hangmanbox3(numOfChar,toguess,usedletters,turn);
					else if(mistakes==3)
						hangmanbox4(numOfChar,toguess,usedletters,turn);
					else if(mistakes==4)
						hangmanbox5(numOfChar,toguess,usedletters,turn);
					else if(mistakes==5)
						hangmanbox6(numOfChar,toguess,usedletters,turn);
					else if(mistakes==6)
						hangmanbox7(numOfChar,toguess,usedletters,turn);
					else if(mistakes==7)
						hangmanbox8(numOfChar,toguess,usedletters,turn);
					else if(mistakes==8)
						hangmanbox9(numOfChar,toguess,usedletters,turn);
					
						fflush(stdin);
						gotoxy(43,18);printf("Enter a letter: ");
						if(checkguess(numOfChar,toguess)){
						gotoxy(43,18); printf("Congratulations, You won!");
							getch();
							break;
						}	
						scanf("%c",&c);	 
						
						if(turn ==0){
								toLetter(guess,toguess,toupper(c),numOfChar);
								usedletters[turn] = toupper(c);
								turn++;
								
								if(check2(numOfChar,guess,toupper(c)))
									mistakes++;
						}
						else if(checkletter(usedletters,turn,toupper(c))!=1){
						gotoxy(43,20); printf("Letter already used");
								getch();
						}
						else if(isdigit(c)){
								gotoxy(43,20); printf("Invalid. Try again.");
								getch();
						}
						else{
							toLetter(guess,toguess,toupper(c),numOfChar);
								usedletters[turn] = toupper(c);
								turn++;
								
								if(check2(numOfChar,guess,toupper(c)))
									mistakes++;
						}							
				}
				gotoxy(43,20);
				printf("The word is %s",guess);
				getch();
				break;	
			}
	}
	return 0;
}
