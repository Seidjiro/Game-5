#include <iostream>
#include <string>
using namespace std;
string askText(string prompt);
int askNumber(string prompt);

void tellStory(string name,string noun, int number,string bodyPart,string verb);
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create а new story.\n";
	string name = askText("Please enter а name: ");
	string noun = askText("Please enter а plural noun: ");
	int number = askNumber("Please enter а number: ");
	string bodyPart = askText("Please enter а body part: ");
	string verb = askText("Please enter а verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	return 0;
}
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}
int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}
void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up а life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day. the ";
	cout << noun;
	cout << " found the explorer. \n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ". а tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ". \n";
	cout << "After all this time. the quest was finally over. ";
	cout << "And then. the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << " . ";
	cout << "The moral of the story? Ве саreful what you ";
	cout << verb;
	cout << " for. ";
}