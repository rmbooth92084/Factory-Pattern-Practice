#include <iostream>
#include <string>
#include <stdio.h>
#include "headers.h"
#include <vector>

using namespace std;
//global variable
vector<int> list;

/*
 * This funtion will prompt the user to select what type of 
 * sort to use on thier list of integers
 */
void selectSort()
{
	cout << "Please select a sorting method: " << endl;
	cout << "a) Bubble sort " << endl;
	cout << "b) Selection sort " << endl;
	cout << "c) Quick sort " << endl;
	
	vector<int> sortedList;
	char userInput = 'a';
	int validInput;
	cin >> userInput;
	while(1)
	{
		validInput = 1;


		switch(userInput)
		{
			case 'a':
			case 'A':
				sortedList = BubbleSort(list);
				break;
/*			case 'b':
			case 'B':
				SortedList = SelectionSort(list);
				break;
			case 'C':
			case 'C':
				SortedList = QuickSort(list);
				break;*/
			default:
				validInput = 0;
				cout << "invalid input" << endl;
				break;
		}
		if(validInput)//breaks out of loop if a valid input is inputed
		{
			list = sortedList;
			break;
		}
		cin >> userInput;
	}

}
/*
 * This function propts the user to input a list of integers
 * to sort in another punction
 */
void getUserListInput()
{
	cout << "Please enter a list of integers to be sorted from least to greatest." << endl;
	cout << "Must ipnut 5 numbers." << endl;
	
	int input;
	for(int i = 0; i < 5; i++)
	{
		cin >> input;
		list.push_back(input);
	}
}

int main(int argc,char** argv) 
{
	getUserListInput();
	selectSort();
	for(int i = 0; i < list.size(); i++)
	{
		cout << list.at(i);
	}
	cout << endl;
	return 0;
}
