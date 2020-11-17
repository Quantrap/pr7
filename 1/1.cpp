#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, max;
	cout << "Введите длинну и ширину массива:";
	cin >> N >> A;
	int** mass = new int *[N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = new int[A];
	}

	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			mass[i][g] = rand() / 1000;
			if (i == 0) max = mass[0][0];
			if (max < mass[i][g]) max = mass[i][g];
			cout << mass[i][g] << " ";
		}
		cout << "\n";
	}
	cout << "Максимальное значение = " << max << "\n";
	delete[] mass;
	system("pause");
	return 0;
}