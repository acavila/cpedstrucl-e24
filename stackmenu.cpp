#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n\n: ";
	
}

int main() {
  int choice, x;
  Stack * s = new Stack(100);
  while(choice!=4){

  menu();
  cin >> choice;
  switch(choice){
  	case 1: cout <<"Input Number : ";
  			cin >> x;
  			s -> push(x);
  			s -> display();
  			cout <<"press any key" << endl;
  			break;
  			
  	case 2: s -> pop();
			break;
			
	case 3: s -> display();
			break;
			
	case 4: exit(0);
			break;
	default: cout<< "Try again!";
  }
  getch();
  system("cls");
	}
  return 1;
}
