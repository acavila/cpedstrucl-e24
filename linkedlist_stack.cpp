#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *back;
	Node *top = NULL;
	Node *bot = NULL;
};

Node *node, *top = NULL, *bot = NULL;

void push(int num){
	node = new Node;
	node->data = num;
	node->next = NULL;
	if(top == NULL && bot == NULL){
		node->back = NULL;
		top = bot = node;
	}
	else{
		bot->next = node;
		node->back = bot;
		bot = node;
	} 
}

void pop(){
	if(top == NULL && bot == NULL){
		cout << "Stack is Empty! Deletion is not possible!";
	}
	else{
		int data;
		if(bot->back !=NULL){
			node = bot;
			bot = bot->back;
			bot->next = NULL;
			data = node->data;
			delete node;
		}
	else{
		data = top->data;
		delete top, bot, node;
		top=bot=NULL;
	}
	cout << data << "success!";
	}
}

void display(){
	node = top;
	if(node == NULL){
		cout << "Stack is Empty!\n";
	}
	else{
		while(node->next !=NULL){
			cout << node->data << " , ";
			node = node->next;
		}
		cout << node->data;
	}
}


void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n\n: ";
	
}

int main() {
  int choice, num;
  //Stack * s = new Stack(100);
  while(choice!=4){

  menu();
  cin >> choice;
  switch(choice){
  	case 1: cout <<"Input Number : ";
  			cin >> num;
  			push(num);
  			cout <<"press any key" << endl;
  			break;
  			
  	case 2: pop();
			break;
			
	case 3: display();
			break;
			
	case 4: exit(0);
			break;
	default: cout<< "Try again!";
		        break;
  }
  getch();
  system("cls");
	}
  return 0;
}
