// List(task 2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Standard Library class map test program.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <set>
#include <map> // map class-template definition
#include <list>
#include <string>

// define short name for map type used in this program
typedef std::map< int, double, std::less< int > > Mid;
//typedef std::map< int, int, std::less< int > > Count;

int main()
{
	//Count counters;
	std::map<int, int> counters; // key - value with nuber - how manytimes
	int size = 19;
	int arr[] = {12, 12, 4, 4, 4, 6, 6, 6, 6, 5, 5, 9, 2, 3, 1, 1, 1, 1, 1};

	std::set<int> mySet;
	mySet.insert(arr, arr + size);

	//for (int el : mySet)
	//{
	//	cout << el << " ";
	//	counters[el] = 0;
	//}

	//cout << endl;

	//for ( std::pair<int, int> el : counters )
	//{
	//	cout << el.first << " " << el.second << endl;
	//}

	int mostRepeatedNumber;
	int tempMostRepeatedTimes = 0;
	int counter = 1;

	for (int i = 0; i < size; i++)
	{
		// start counting
		// if current element is equal from next element -> count++
		// if current element is different from next element -> update map key : elem and value : counter
		// counter gets reset(=1)


			if (arr[i] == arr[i + 1])// && i != size-1)
			{
				counter++;
				//cout << " match, counter goes up to: " << counter << endl;

			}
			/*
			else // if((arr[i] != arr[i + 1]) && i != size-1) // 
			{
				if (counter > tempMostRepeatedTimes)// && (i != size - 1))
				{
					
					tempMostRepeatedTimes = counter;
					//cout << " tempMostRepeatedTimes is: " << tempMostRepeatedTimes << endl << " counter is " << counter << "arr[i]=" << arr[i] << endl;
					//counters.insert(std::pair< int, int >(arr[i], counter));
					mostRepeatedNumber = arr[i];
					
					counter = 1;
				}
			}
			*/
			/*else {
				tempMostRepeatedTimes = counter;
			}*/
			
			if (counter > tempMostRepeatedTimes)// && (i != size - 1))
			{

				tempMostRepeatedTimes = counter;
				//cout << " tempMostRepeatedTimes is: " << tempMostRepeatedTimes << endl << " counter is " << counter << " arr[i]=" << arr[i] << endl;
				//counters.insert(std::pair< int, int >(arr[i], counter));
				mostRepeatedNumber = arr[i];

				counter = 1;
			}
	}

	counters.insert(std::pair< int, int >(mostRepeatedNumber, tempMostRepeatedTimes));

	cout << "The most repeated in a row number is: " << counters.find(mostRepeatedNumber)->first << " repeated: " << counters.find(mostRepeatedNumber)->second << " times" << endl;

	return 0;
}