#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, k = 0;
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
			if (mass[i][g] % 2 == 1)
			{
				k += 1;
			}
			cout << mass[i][g] << " ";
		}
		cout << "\n";
	}
	cout << "Количество нечётных элементов = " << k << "\n";
	delete[] mass;
	system("pause");
	return 0;
}