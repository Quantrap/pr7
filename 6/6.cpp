#include <iostream>
using namespace std;


int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, k = 0;
	cout << "Введите длинну и ширину массива:";
	cin >> N >> A;
	cout << "Введите нижний порог для элементов:";
	cin >> k;
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
			cout << mass[i][g] << " ";
			if (mass[i][g] < k) 
			{
				mass[i][g] = k;
			}
		}
		cout << "\n";
	}
	cout << "Изменённый массив:\n";
	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			cout << mass[i][g] << " ";
		}
		cout << "\n";
	}
	delete[] mass;
	system("pause");
	return 0;
}