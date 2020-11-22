#include <iostream>

void collatz(int number)
{
	while ((number != 1) and (number != 0) and (number != -1) and (number != -5) and (number != -17)) 	
	{
		if ((number % 2) == 0)  // falls die Zahl gerade ist
		{
			number = (number / 2);
			std:: cout<< number << std:: endl;
		}
		else // falls die Zahl ungerade ist
		{
			number = (number * 3 + 1);
			std:: cout<< number << std:: endl;
		}
	}	
}

int main()
{
	int number;
	std:: cout<<  "wähle eine Zahl:" << std::endl;
	std:: cin>> number;
	collatz(number);
}

