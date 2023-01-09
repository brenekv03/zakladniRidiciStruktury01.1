// zakladniRidiciStruktury01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()
{
	char volba;
	cout << "M-Mocnina\nS-CifernySoucet\nKonec\nVyberte si jednu z moznosti v menu: ";
	cin >> volba;
	while (volba!='k')
	{
		switch (volba)
		{
			case 'M': 
			{
				double a = 1 + (10 - 1) * (double)rand() / (RAND_MAX + 1);
				cout << a << endl;
				int n = -5 + rand() % (5 - (-5) + 1);
				cout << n << endl;
				double mocnina = 1;
				int N = abs(n);   //potrebuju kladny exponent
				for (int i = 0; i < N; i++)  // pocitame mocninu na kladny exponent
				{
					mocnina *= a;
				}
				if (n < 0)  //pokud byl puvodni exponent zaporny mocninu prevratim
				{
					mocnina = 1 / mocnina;
				}
				cout << "\n\nMocnina je: " << mocnina << endl << endl;

			}break;
			case 'S': 
			{
				int n;
				cout << "\nZadejte cele cislo n: ";
				cin >> n;
				int cifSouc = 0;
				while (n>0)
				{
					cifSouc += n % 10;
					n = n/10;
				}
				cout << "\nCiferny soucet je: " << cifSouc;
			}break;
			case 'K': 
			{
				cout << "\nKonec";
				break; 
			}
			default:
				{
					cout << "Spatna volba";
				}break;
		}
		cout << "\nM-Mocnina\nS-CifernySoucet\nKonec\nVyberte si jednu z moznosti v menu: ";
		cin >> volba;
	}
	
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
