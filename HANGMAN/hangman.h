void menu();
void start();
void init(int size,char toguess[]);
void hangmanbox1(int size,char toguess[],char a[],int turn);
void hangmanbox2(int size,char toguess[],char a[],int turn);
void hangmanbox3(int size,char toguess[],char a[],int turn);
void hangmanbox4(int size,char toguess[],char a[],int turn);
void hangmanbox5(int size,char toguess[],char a[],int turn);
void hangmanbox6(int size,char toguess[],char a[],int turn);
void hangmanbox7(int size,char toguess[],char a[],int turn);
void hangmanbox8(int size,char toguess[],char a[],int turn);
void hangmanbox9(int size,char toguess[],char a[],int turn);
void caps(int size,char []);
void lettersused(char a[],int turn);

int checkletter(char[],int,char);
int checkguess(int,char[]);
void toLetter(char[],char[],char,int);
int check2(int size,char guess[],char c);
