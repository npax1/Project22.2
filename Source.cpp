#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[] = "Tenitiate massnge of mode 3, adel Y, whiiffein ser, anctionality.";
	int counter_number = 0;
	int counter_letter = 0;
	int counter_other;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			counter_number++;
		}
		if (isalpha(str[i]))
		{
			counter_letter++;
		}
	}
	counter_other = strlen(str) - counter_letter - counter_number;
	cout << "\nNumbers [" << counter_number << "]";
	cout << "\nLetters [" << counter_letter << "]";
	cout << "\nOther symbols [" << counter_other << "]";
}