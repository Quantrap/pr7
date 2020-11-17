#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, k=0;
	double sum = 0;
	cout << "Введите длинну и ширину массива:";
	cin >> N >> A;
	int** mass = new int* [N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = new int[A];
	}
	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			mass[i][g] = rand() / 1000;
			if (mass[i][g] % 2 == 0 && mass[i][g] > 0)
			{
				sum += mass[i][g];
				k += 1;
			}
			cout << mass[i][g] << " ";
		}
		cout << "\n";
	}
	cout << "Среднее арифметическое чётных элементов = " << sum/k << "\n";
	delete[] mass;
	system("pause");
	return 0;
}