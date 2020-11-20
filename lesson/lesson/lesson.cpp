#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n, m, i = 0, j = 0;
	int **a;
	cout << "Type in elements of first matrix " << endl;
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

	cin >> m;
	int **b;
	b = new int*[m];
	// filling up array b with memory
	for (i = 0; i < m; i++) {
		b[i] = new int[m];
	}
	cout << endl << "Type in elements of second matrix " << endl;
	// input of elements of matrix b
	for (i = 0; i < m; ++i) {
		for (j = 0; j < m; ++j)
		{
			cout << "Type in element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	}
	// summarizing
	if (n < m) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b[i][j] += a[i][j];
			}
		}
		for (int i = 0; i < m; i++, cout << endl) {
			for (int j = 0; j < m; j++) {
				cout << b[i][j] << " ";
			}
		}
	}
	else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] += b[i][j];
			}
		}
		for (int i = 0; i < n; i++, cout << endl) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
		}
	}

	// my mistakes
	/*if (n == m) {
		// summarizing two matrixes
		for (i = 0; i < n; ++i)
			for (j = 0; j < m; ++j)
				summ[i][j] = a[i][j] + b[i][j];
	}
	else if (n < m) {
		for (i = 0; i < n; ++i)
			for (j = 0; j < m; ++j)
				summ[i][j] = a[i][j] + b[i][j];
	}
	cout << endl << "Сумма двух матриц " << endl;
	// output of summ
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		{
			cout << summ[i][j] << "  ";
			if (j == m - 1)
				cout << endl;
		}*/

}