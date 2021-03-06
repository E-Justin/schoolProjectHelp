// Lab 08
// This program should calculate the average score of a test after user inputs answers.

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;	// array size
int correctAnswers[SIZE] = {5, 22, 35, 0, 16, 28, 4, 3, 42, 52};	// correct answers stored in array
void numberCorrect(int, int);	// function prototype
void inputAnswers(int[]);	// function prototype
int givenAnswers[SIZE];	// Array initialization
int index = 0;



void inputAnswers(int givenAnswers[])			// function definition
{
	
	for (int index = 0; index < 10; index++) // initialize loop to accept answers 1-10 from user
	{
		int questionNumber = index + 1;	// start at question number 1
		cout << "Please enter your answer to problem number " << questionNumber << endl;	// prompts user to enter answers to questions 1-10.
		cin >> givenAnswers[index];		// answers the user inputs are stored in the givenAnswers[index] array
		
	}
}
int numberCorrect(int correctAnswers[], int givenAnswers[]) // function definition with two arrays as arguments
{
	int numRight = 0;	// initialize numRight to 0
	for (int index = 0; index < 10; index++);	// initialize loop to cycle through both arrays
	{
		if (correctAnswers[index] == givenAnswers[index])	// compares givenAnswers to correct answers
		{
			numRight++;										// if answers are the same, the program adds 1 to numRight
		}
	}
	cout << "Your test grade is " << numRight * 10 << "%";	// display test grade as a percent
	return 0;
}
int main()
{
	inputAnswers(givenAnswers);	// calling function to get answers from user

	numberCorrect(correctAnswers, givenAnswers); // calling function to compare arrays, which inputs numRight into algorithm to calculate average grade as a percent.

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
