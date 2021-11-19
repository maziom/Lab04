#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	/* //zad1
	const int roz = 10;
	int tab[roz], x = 3 ;

	for (int i = 0; i < roz; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	*/
	/*  //zad2
   const int roz = 10;
   int tab[roz], x = 3;

   for (int i = 0; i < roz; i+=2)
   {
	   tab[i] = x;
	   cout << tab[i] << " ";
	   x += 6;
   }
   */
   /*   //zad3
   const int roz = 10;
   int tab[roz], a, x=5;


   cout << " Podaj a: ";
	   cin >> a;
	   cout << "\n tablica elementow" << endl;

   for (int i = roz-1; i >= 0; i--)
   {
	   if(i == 9)
	   tab[i] = a;
	   else {
		   tab[i] = a - x;
		   x += 5;
	   }
	   cout << "tab[" << i << "]= " << tab[i] << endl;

   }
   for (int i = 0; i < roz ; i++)
   {


	   cout << "tab[" << i << "]= " << tab[i] << endl;

   }
   */
   /*  //zad4
  const int roz = 10;
  int tab[roz], a;


  srand(time(NULL));
  for (int i = 0; i < roz; i++)
  {
	  tab[i] = rand() % 74 - 23;

	  cout << "tab[" << i << "]= " << tab[i] << endl;

  }
  int najmniejsza = tab[0];

  for (int i = 0; i < roz; i++)
  {

	  if (tab[i] < najmniejsza)

	  najmniejsza = tab[i];
  }
  cout << "Najmniejsza liczba: " << najmniejsza << endl;
  */
  /* //zad5
 int tab[5], z;

 for (int i = 0; i < 2; i++)
 {
	 cout << "Podaj wartosc tablicy: ";
		 i + 1;
	 cin >> tab[i];
	 cout << "\n";
 }

 for (int i = 0; i < 3; i++)
 {
	 z = tab[i] + tab[i + 1];
		 tab[i + 2] = z;
 }

 for (int i = 0; i < 5; i++)
 {
	 cout << tab[i] <<;
	 cout << "\n";
 }

 cout << "\n";
 */
  //zad6
int tab[20];

for (int i = 0; i < 10; i++)
{
	tab[i] = 20;
}
	for (int i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
	}

	for (int i = 0; i < 20; i++)
	{
		cout << tab[i];
		cout << "\t";
	}

 }
