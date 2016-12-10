#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void mainMenu();
void strCat(char *ptrMsg1, char *ptrMsg2);
void strCpy(char *ptrMsg1, char *ptrMsg2);
void strRev(char *ptrMsg1, char *ptrMsg2);
void strCmp(char *ptrMsg1, char *ptrMsg2);

int main(){
	char pili;
	
	system("cls");
	int choice=0;
	char msg1[10], msg2[10], msg3[10];
			
	cout << "Enter first message : ";
	 gets(msg1);
	cout << "Enter second message : ";
	 gets(msg2);
	 	
	while(1)
	{
		system("cls");
		mainMenu();
		cin >> choice;
		switch(choice)
		{
			case 1 : strCat(msg1, msg2);
					 cout << msg1 << endl;
					 getch();
					 break;
					 
			case 2 : strCpy(msg3, msg2);
					 cout << msg3;
					 getch();
					 break;
					 
			case 3 : strRev(msg1, msg2);
					 cout << msg1 << endl << msg2;
					 getch();
					 break;
					 
			case 4 : strCmp(msg1,msg2);
					 break;
		}
	};
  return 0;
}

void mainMenu(){
	cout <<"-----MAIN MENU-----\n";
	cout <<"1. Concatenate\n";
	cout <<"2. Copy\n";
	cout <<"3. Reverse\n";
	cout <<"4. Compare\n";
	cout <<"5. Exit\n";
	cout<<"Please enter your choice [1-5] : ";
}

void strCat(char *ptrMsg1, char *ptrMsg2){
	while(*ptrMsg1)
		*ptrMsg1++;
	while(*ptrMsg1++ = *ptrMsg2++);
}

void strCpy(char *ptrMsg1, char *ptrMsg2){
	while(*ptrMsg1++ = *ptrMsg2++);
}

void strRev(char *s1, char *s2){
	while(*s1)
	*s1--;
	while(*s1-- = *s2--);
}

void strCmp(char *s1, char *s2){
	if(*s1==*s2)
	cout << "Equal" << endl;
	else
	cout << "Not Equal.";
	*s1++;
	*s2++;
	getch();
}

