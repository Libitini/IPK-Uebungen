#include <iostream>

int fibonacci(long number)
{
	long count;
	count = 2;
	long f1;
	f1 = 0;
	long f2;
	f2 = 1;
	long f3 = 0;
	char command;
	std:: cout << "Willst du alle Folgenglieder oder nur das letzte angezeigt bekommen? Tippe 'f' für alle Folgenglieder oder 'l' für nur das letzte" << std:: endl;
	std:: cin >> command;
	switch (command)
	{
		case 'f': 
			{
			if (number == 1)
			{
				std:: cout << "Deine Fibonacci-Folge:" << std:: endl;
				std:: cout << f1 << std:: endl;
				std:: cout << "Wenig spektakulär, aber versuch es doch mal mit einer größeren Zahl" << std:: endl;
			}
			else if (number == 0)
			{
				std:: cout << "Es gibt kein 0. Folgenglied der Fibonacci-Folge. Versuche es bitte mit einer größeren Zahl" << std:: endl;
			}
			else 
			{
				std:: cout << "Deine Fibonacci-Folge:" << std:: endl;
				std:: cout << f1 << std:: endl;
				std:: cout << f2 << std:: endl;
		
				while (count < number)
				{
					count +=  1;
					f3 = f1 + f2;
					f1 = f2;
					f2 = f3;
					std:: cout << f3 << std:: endl;
				}
			}
			}
			break;
		case 'l':
			{
			if (number == 0)
			{
				std:: cout << "Es gibt kein 0. Folgenglied der Fibonacci-Folge. Versuche es bitte mit einer größeren Zahl" << std:: endl;
			}
			else if (number == 1)
			{
				std:: cout << "Das letzte (und in diesem Fall auch einzige) Glied deiner Fibonacci-Folge:" << std:: endl;
				std:: cout << f1 << std:: endl;
			}
			else
			{
				std:: cout << "Das letzte Glied deiner Fibonacci-Folge:" << std:: endl;		
				while (count < number)
				{
					count +=  1;
					f3 = f1 + f2;
					f1 = f2;
					f2 = f3;
				}
				std:: cout << f3 << std:: endl;
			}}
			break;
		default:
			{
				std:: cout << "Bitte wähle 'f' oder 'l' aus" << std:: endl;
			}

	
	}
	return f3;
}

int main()
{
	int number;
	std:: cout << "Wähle ein N:" << std::  endl;
	std:: cin >> number;
	fibonacci(number);
}
