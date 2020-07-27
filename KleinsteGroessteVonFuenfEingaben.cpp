#include <iostream>
using namespace std;

int main()
{
	int eingabe_array[5] = { 0 };
	int kleinste_zahl;
	int groesste_zahl;
	for (int i = 0; i < 5; i++)
	{
		int eingabe;
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> eingabe;
		eingabe_array[i] = eingabe;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << eingabe_array[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			kleinste_zahl = eingabe_array[i];
			groesste_zahl = eingabe_array[i];
		}

		else if (kleinste_zahl > eingabe_array[i])
		{
			kleinste_zahl = eingabe_array[i];
		}

		else if (groesste_zahl < eingabe_array[i])
		{ 
			groesste_zahl = eingabe_array[i];
		}
	}

	cout << "Die kleinste eingegebene Zahl lautete: " << kleinste_zahl << endl
		<< "Die groesste eingegebene Zahl lautete: " << groesste_zahl << endl;
	system("PAUSE");
	return 0;
}