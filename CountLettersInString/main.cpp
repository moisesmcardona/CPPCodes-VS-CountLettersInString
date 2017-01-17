#include<iostream>
using namespace std;

int countfunction(char *);

int main()
{
	int letters;
   	char phrase[255] = { "cplusplus.codes is the best website to download codes!" };
	char *phrasepointer;
    phrasepointer = phrase;
	letters = countfunction(phrasepointer);
	cout << "The phrase: " << phrasepointer << endl;
	cout << "has " << letters << " letters and characters (including spaces)" << endl;
	system("pause");
	return 0;
}

int countfunction(char *phrase)
{
	int counter = 0;
	for (int i = 0; *(phrase + i) != '\0'; i++)
	{
		counter++;
	}
	return counter;
}