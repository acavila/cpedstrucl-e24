#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int x = 1;
	int A[n] = {30, 40, 20, 50, 10};
	for(int i=0; i<n-1; i++) {
		int min=A[i], index = i;
		for(int j=i+1; j<n; j++) {
			if(A[j] < min) {
				min = A[j];
				index = j;
			}
		}
		A[index] = A[i];
		A[i] = min;
		
		cout << "Pass "<< x++ << " is: ";
		for(int i=0; i<5; i++) {
			cout << A[i] << " ";
		}
	cout << "Swapped: " << A[i] << "," << A[i+1];
	cout << endl;
	}
	return 0;
}
