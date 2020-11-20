#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n, m, i = 0, j = 0;
	cin >> n;
	int a[200][200], b[200][200], summ[200][200];
	// input of elements of matrix a
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
		{
			cout << "Введите элемент а" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cin >> m;
	cout << endl << "Введите элементы второй матрицы " << endl;
	// input of elements of matrix b
	for (i = 0; i < m; ++i) {
		for (j = 0; j < m; ++j)
		{
			cout << "Введите элемент b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	}
	// summarizing two matrixes
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
			summ[i][j] = a[i][j] + b[i][j];
	
	cout << endl << "Сумма двух матриц " << endl;
	// output of summ
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		{
			cout << summ[i][j] << "  ";
			if (j == m - 1)
				cout << endl;
		}

}