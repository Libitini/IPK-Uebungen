#include <iostream>
#include <cmath>

void berechnen(double &a, double &b, double &c);
void menu();

void menu()
{
	std:: string command =  "weiter";
	while(command != "beenden")
	{	
	double a;
	double b;
	double c;
	std:: cout << "wähle drei Zahlen a, b, und c"<<std:: endl;
	std:: cout << "a = " << std::flush;
	std:: cin >> a;
	std:: cout << "b = " << std::flush;
	std:: cin >> b;
	std:: cout << "c = " << std::flush;
	std:: cin >> c;
	berechnen(a, b, c);
	std:: cout << "Willst du das Programm beenden? Dann tippe: 'beenden'"<<std:: endl;
	std:: cin >> command;
	}
}

void berechnen(double &a, double &b, double &c)
{
	double x1;
	double x2;
	if ((b*b-4*a*c) < 0)
		{
		std:: cout << "bitte wähle andere Zahlenwerte"<<std:: endl;
		}
	else if ((b*b-4*a*c) == 0)
	{
		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		std:: cout << "die einzige Lösung der Mitternachtsformel lautet:" <<std:: endl;
		std:: cout << "x = " << x1 <<std:: endl;
	}
	else
		{
		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
		std:: cout << "die Lösungen der Mitternachstsformel lauten:";
		std:: cout << "x1 = " << x1 <<std:: endl;
		std:: cout << "x2 = " << x2 <<std:: endl;
		}
}

int main()
{
	menu();
	}

		
		
