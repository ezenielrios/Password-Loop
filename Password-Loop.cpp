//----------------------------------------
// Name: Ezeniel Rios
// Date: 4/3/21
// Class: CIS170C
//---------------------------------------
#include <iostream>
using namespace std;

const int SIZE = 80;
const int MIN = 6;

//functionn prototypes
int isValid(char pwd[]);

int main()
{
	char password[SIZE];
	while (true)
	{
		cout << "Password requirements:\n";
		cout << "- The password should be at least 6 characters long.\n";
		cout << "- The password should contain at least one uppercase and one lowercase letter.\n";
		cout << "- The password should have atleast one digit." << endl << endl;
		cout << "Enter a password: ";
		cin.getline(password, SIZE);
		if (isValid(password) == 1)
		{
			cout << "The password is valid." << endl;
			break;
		}
		else
		{
			cout << "The password is invalid." << endl << endl;
		}
	}
	system("pause");
}

int isValid(char pwd[])
{
	bool minLength = false;
	bool hasUpper = false;
	bool hasLower = false;
	bool hasDigit = false;
	int length = strlen(pwd);
	if (length >= MIN)
	{
		minLength = true;
	}
	for (int i = 0; i < length; i++)
	{
		if (isupper(*pwd))
			hasUpper = true;
		if (islower(*pwd))
			hasLower = true;
		if (isdigit(*pwd))
			hasDigit = true;
		*pwd++;
	}
	if (minLength == true && hasUpper == true && hasLower == true && hasDigit == true)
		return 1;
	else
		return 0;

}

