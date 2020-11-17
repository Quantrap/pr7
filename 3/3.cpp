#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0;
	double sum = 0;
	cout << "Введите величину квадратной матрицы:";
	cin >> N;
	int A = N;
	double** mass = new double* [N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = new double[A];
	}
	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			mass[i][g] = rand() % 1000 / 1000. + rand() % 1000;
			if (i == g) sum += mass[i][g];
			cout << mass[i][g] << " ";
		}
		cout << "\n";
	}
	cout << "Сумма элементов главной диагонали = " << sum << "\n";
	delete[] mass;
	system("pause");
	return 0;
}