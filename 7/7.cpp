#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, k=1;
	cout << "Введите длинну и ширину массива:";
	cin >> N >> A;
	int** mass = new int* [N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = new int[A];
	}
	cout << "Вводите значения элементов через Enter:\n";
	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			cin >> mass[i][g];
			k *= mass[i][g];
		}
	}
	cout << "Массив:";
	for (int i = 0; i < N; i++)
	{
		cout << "\n";
		for (int g = 0; g < A; g++)
		{
			cout << mass[i][g] << " ";
		}
	}
	cout << "Произведение всех элементов =" << k << "\n";
	if ((k > 99 && k < 1000) || (k < -99 && k > -1000)) cout << "Произведение всех чисел является трёхзначным числом!\n";
	else cout << "Произведение всех чисел не является трёхзначным числом!\n";
	delete[] mass;
	system("pause");
	return 0;
}