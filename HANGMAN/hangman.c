#include <stdio.h>


int i;
char c;
void menu(){
	
	drawDBox(18,8,100,23);    
	center(" *   *     *      *   *  *****  *       *     *     *   *",10);
	center(" *   *    * *     **  *  *      **     **    * *    **  *",11);
	center(" *****   *****    * * *  *  **  * *   * *   *****   * * *",12);
	center(" *   *  *     *   *  **  *   *  *  * *  *  *     *  *  **",13);
	center("    *   * *       *  *   *  *****  *   *   * *       * *   *\n\n\n\n",14);
	
	
	center(" [1] - START GAME",17);
	center(" [3] - Exit      ",19);
}

void start(){
	system("cls");
	drawDBox(18,8,100,23);    
	center(" *   *     *      *   *  *****  *       *     *     *   *",10);
	center(" *   *    * *     **  *  *      **     **    * *    **  *",11);
	center(" *****   *****    * * *  *  **  * *   * *   *****   * * *",12);
	center(" *   *  *     *   *  **  *   *  *  * *  *  *     *  *  **",13);
	center("    *   * *       *  *   *  *****  *   *   * *       * *   *\n\n\n\n",14);
	
}
int checkletter(char a[],int b,char c){
	for(i=0;i<b;i++)
		if(a[i]==c)
			return 0;
	return 1;	
}
void init(int size,char toguess[]){
	for(i=0;i<size;i++)
		toguess[i] = '*';
}
void toLetter(char a[],char b[],char c,int size){
	int j;
	for(j=0;j<size;j++){
		if( toupper(a[j])== c)
			b[j] = c ;
	}	
}
int checkguess(int size,char a[]){
	
	for(i=0;i<size;i++)
		if(a[i]=='*')
			return 0;
	return 1;
}
void lettersused(char a[],int turn){
	system("cls");
	drawDBox(42,8,80,12);
	center("   Letters used",9);
	
	gotoxy(43,10);
	for(i=0;i<turn;i++)
				printf("%c ",a[i]);
}

int check2(int size,char guess[],char c){
	int h;
	for(h=0;h<size;h++)
		if(guess[h] ==c)
			return 0;
	return 1;
}

void caps(int size,char string[]){
	int s;
	for(s=0;s<size;s++)
		string[s] = toupper(string[s]);
}
void letters(char c[],int a){
	
}

void hangmanbox1(int size,char toguess[],char a[],int turn){
		lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+"); 
		gotoxy(20,11);printf("|");  
		gotoxy(20,12);printf("|");  
		gotoxy(20,13);printf("|");  
		gotoxy(20,14);printf("|");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		
		
	gotoxy(43,15);printf("Guess the word: ");
	for(i=0;i<size;i++)
		printf("%c",toguess[i]);
}
void hangmanbox2(int size,char toguess[],char a[],int turn){
		lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|");  
		gotoxy(20,12);printf("|");  
		gotoxy(20,13);printf("|");  
		gotoxy(20,14);printf("|");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
		for(i=0;i<size;i++)
			printf("%c",toguess[i]);
}
void hangmanbox3(int size,char toguess[],char a[],int turn){

		lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|");  
		gotoxy(20,13);printf("|");  
		gotoxy(20,14);printf("|");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");  
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
}
void hangmanbox4(int size,char toguess[],char a[],int turn){

	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|");  
		gotoxy(20,14);printf("|");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);


}
void hangmanbox5(int size,char toguess[],char a[],int turn){
	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|         |");  
		gotoxy(20,14);printf("|         |");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
				
	
}
void hangmanbox6(int size,char toguess[],char a[],int turn){
	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|        \\|");  
		gotoxy(20,14);printf("|         |");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
}
void hangmanbox7(int size,char toguess[],char a[],int turn){
	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|        \\|/");  
		gotoxy(20,14);printf("|         |");  
		gotoxy(20,15);printf("|");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
	
}
void hangmanbox8(int size,char toguess[],char a[],int turn){
	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|        \\|/");  
		gotoxy(20,14);printf("|         |");  
		gotoxy(20,15);printf("|        / ");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _");   
		gotoxy(43,15);printf("Guess the word: ");
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
	

}

void hangmanbox9(int size,char toguess[],char a[],int turn){
	lettersused(a,turn);
		drawDBox(18,8,40,19);
		gotoxy(20,10);printf("+ - - - - +"); 
		gotoxy(20,11);printf("|         |");  
		gotoxy(20,12);printf("|         O");  
		gotoxy(20,13);printf("|        \\|/");  
		gotoxy(20,14);printf("|         |");  
		gotoxy(20,15);printf("|        / \\");  
		gotoxy(20,16);printf("|");  
		gotoxy(20,17);printf("+_ _ _ _ _ _ _"); 
		gotoxy(43,15);printf("Guess the word: "); 
			for(i=0;i<size;i++)
				printf("%c",toguess[i]);
}




