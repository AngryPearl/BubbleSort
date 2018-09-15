#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int tab[] = { 9,8,2,5,3,7,2,4,456,44,2,14,11,214,1,4,14,124,21,1,71,5,2142,14,781,41,52,1,14,1,12,45,35,35,3,44,523,4 };
	int licznik = 0;
	int size = 1;
	unsigned int tabSize = sizeof(tab) / sizeof(int);

	for (int i = 0; i < tabSize; i++)
	{
		cout << tab[i] << " ";
		Sleep(10);
	}
	cout << endl;
	Sleep(5000);

	while (size + 1 < tabSize)
	{
		for (int i = 0; i < sizeof(tab) / sizeof(int) - size; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				tab[i] += tab[i + 1];
				tab[i + 1] = tab[i] - tab[i + 1];
				tab[i] = tab[i] - tab[i + 1];

				for (int i = 0; i < tabSize; i++)
					cout << tab[i] << " ";

				Sleep(20);

				system("cls");
				licznik++;
			}

		}
		size++;
	}

	for (int i = 0; i < tabSize; i++)
		cout << tab[i] << " ";
	cout << "\nchanges: " << licznik << endl;

	system("pause");
	return 0;

}