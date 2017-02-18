#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int x = 1;
	int j;
	int A[n] = {40, 30, 20, 50, 10};
	for(int i=1; i<n; i++) {
		int tmp = A[i];
		j = i-1;
		
		while(j>=0 && tmp<A[j]) {
			A[j+1] = A[j];
			j=j-1;
		}
		A[j+1] = tmp;
		cout << "Pass "<< x++ << " is: ";
		for(int i=0; i<n; i++) {
			cout << A[i] << " ";
		}
	cout << "Swapped: " << A[i] << "," << A[i+1];
	cout << endl;
	}
	return 0;
}
