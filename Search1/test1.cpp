#include <iostream>
using namespace std;

int find_first_not_in_range(int* pi, int N, int L, int U) {

	for (int i = 0; i < N; i++) {
		if (pi[i]<L || pi[i]>U) {
			return i;
		}
	}

	return -1;
}
void print_duplicate(int* pi1, int N1, int* pi2, int N2) {
	cout << "The duplicates that are found in both arrays are as follows: ";

	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < N2; j++) {
			if (pi1[i] == pi2[j]) {
				cout << pi1[i] << " ";
				break;
			}
		}
	}
}
int main() {
	int key1 = 0, key2 = 0;
	cout << "Please enter the size of the first array.";
	cin >> key1;
	cout << "Please enter the size of the second array.";
	cin >> key2;

	int* iArray1 = new int[key1];
	srand(time(0));
	for (int i = 0; i < key1; i++) {
		iArray1[i] = rand() % 100;
	}

	int* iArray2 = new int[key2];
	for (int i = 0; i < key2; i++) {
		iArray2[i] = rand() % 100;
	}
	print_duplicate(iArray1, key1, iArray2, key2);
	cout << endl << "The complexity of print_duplicate is " << "O(N2)" << endl;
	return 0;
}
int main1() {
	int N = 1000;
	int* iArray = new int[N];
	srand(time(0));
	for (int i = 0; i < N; i++) {
		iArray[i] = rand() % 100;
	}
	int L = 10;
	int U = 60;

	for (int i = 0; i < N; i++) {
		cout << iArray[i] << " ";
	}
	cout <<endl <<"First element not in range is at index " << find_first_not_in_range(iArray, N, L, U)<<endl;
	cout << "The complexity of find_first_not_in_range is " << "O(N)" << endl;
	return 0;
}