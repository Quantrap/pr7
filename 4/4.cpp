#include <iostream>
using namespace std;

int main()
{
	setlocale(NULL, "rus");
	int N = 0, A = 0, p = 0;
	cout << "Введите длинну и ширину массива:";
	cin >> N >> A;
	cout << "Введите наивысший порог для элементов массива:";
	cin >> p;
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
		}
		cout << "\n";
	}
	for (int i = 1; i <= N; i++)
	{
		for (int g = 1; g <= A; g++)
		{
			if (mass[i - 1][g - 1] > p) cout << "элемент в " << i <<  " ряду под номером " <<  g << " больше заданного порога\n";
		}
	}
	delete[] mass;
	system("pause");
	return 0;
}