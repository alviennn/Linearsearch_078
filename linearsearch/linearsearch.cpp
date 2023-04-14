#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximum 20 element.\n\n";
	}


	cout << "\n---------------------\n";
	cout << " enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}



void linesearch()
{
	char ch;
	int comparisons;

	do
	{
		cout << "\nenter the element you want to search: ";
		int item;
		cin >> item;

		comparisons = 0;
		for (i = 0; i < n; i++)
		{
			comparisons++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}

		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nnumber of comparisons: " << comparisons << endl;

		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	linesearch();
}