#include <iostream>
#include <cmath>
using namespace std;
void mainDiag(int **matr, int n) {
	int tmp;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			tmp = matr[i][j];
			matr[i][j] = matr[j][i];
			matr[j][i] = tmp;
		}
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < n; j++) {
			cout << matr[i][j];
		}
	}
}
int main()
{
	int n, i = 0, j = 0;
	int **a;
	cout << "Type in elements of matrix " << endl;
	cin >> n;
	a = new int*[n];
	// filling up array a with memory
	for (i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	// input of elements of matrix a
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
		{
			cout << "Type in element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	mainDiag(a, n);


}