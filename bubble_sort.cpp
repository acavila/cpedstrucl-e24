#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int x = 1;
	int A[n] = {35, 10, 55, 20, 5};
	for(int i=n; i>1; i--) {
		for(int j=0; j<i-1; j++) {
			if(A[j] > A[j+1]) {
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
			}
		}
			cout << "Pass "<< x++ << " is: ";
				
				for(int k=0; k<n; k++) {
					cout << A[k] << " ";
				}
				for(int l=0; l<1; l++) {
						cout << "Swapped: " << A[l] << "," << A[l+1];
				}
				cout << endl;
	}
	return 0;
}
