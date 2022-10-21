#include<iostream>
#include<string>
using namespace std;
int Check_Size(char str1[])
{
	int size = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}
int main()
{
	cout << "   --------------------------------" << endl;
	cout << "\tChecking a Palindrome" << endl;
	cout << "   --------------------------------" << endl;
	char str1[50], str2[50];
	cout << "Enter a Word: ";
	cin >> str1;
	int size = Check_Size(str1);
	int i, j = size-1;
	for (i = 0; i < size; i++,j--)
	{
		str2[i] = str1[j];
	}
	int flag = 1;
	str2[i] = '\0';
	for (i = 0; i < size; i++)
	{
		if (str1[i] != str2[i])
		{
			flag = 0;
		}
	}
	if (flag)
	{
		cout << "Yes! It is Palindrome" << endl;
	}
	else
		cout << "Not a Palindrome" << endl;
}