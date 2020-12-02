#include <iostream>
#include <cstring>
#include<vector>
#include <fstream>
#include<string>
using namespace std;

// Type of aircrafts
struct AU301 {
	int numOfSeat = 100;
	int numOfSection = 2;
};

struct AU302 {
	int numOfSeat = 200;
	int numOfSection = 4;
};

struct AU303 {
	int numOfSeat = 300;
	int numOfSection = 6;
};

struct AU304 {
	int numOfSeat = 400;
	int numOfSection = 8;
};

// Passenger class
class passenger {
public:
	void userInput();
	void screening_summary(bool temp_result, bool questionaire_result);
	void diagnostic_summary();
	string getflightNum();
	int getSeatNum();
private:
	string name;
	string placeOfOrigin;
	string flightNum;
	int seatNum = 0;
};

// Random Number Generator
int* randNumGen(string arg)
{
	// Random Number Generator of Aircraft AU301
	if (arg == "AU301" || arg == "au301" || arg == "Au301" || arg == "aU301")
	{
		// Random Number Array Declaration
		static int randNum[10];

		// Random Number Generator
		for (int i = 0; i < 10; i++)
		{
			// Random Number Generator of first section (seats from 1-50)
			// do while loop to sort out same numbers in the array
			if (i < 5)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 1;
					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 1;
				}
			}
			// Random Number Generator of first section (seats from 51-100)
			// Do while loop to sort out same numbers in the array
			else if (i < 10)
			{
				bool duplicate_check = false;
				do
				{
					bool duplicate_check = false;
					randNum[i] = rand() % 50 + 51;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 51 + 50;
				}
			}
		}
		return randNum;
	}
	// Random Number Generator of Aircraft AU302
	else if (arg == "AU302" || arg == "au302" || arg == "Au302" || arg == "aU302")
	{
		// Random Number Array Declaration
		static int randNum[20];
		for (int i = 0; i < 20; i++)
		{
			// Random Number Generator of first section (seats from 1-50)
			// do while loop to sort out same numbers in the array
			if (i < 5)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 1;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 1;
				}
			}
			// Random Number Generator of first section (seats from 51-100)
			// do while loop to sort out same numbers in the array
			else if (i < 10)
			{

				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 51;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 51;
				}
			}
			// Random Number Generator of first section (seats from 101-150)
			// do while loop to sort out same numbers in the array
			else if (i < 15)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 101;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 101;
				}
			}
			// Random Number Generator of first section (seats from 151-200)
			// do while loop to sort out same numbers in the array
			else if (i < 20)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 151;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 151;
				}
			}
		}
		return randNum;
	}
	// Random Number Generator of Aircraft AU303
	else if (arg == "AU303" || arg == "au303" || arg == "Au303" || arg == "aU303")
	{
	// Random Number Array Declaration
		static int randNum[30];
		for (int i = 0; i < 30; i++)
		{
			// Random Number Generator of first section (seats from 1-50)
			// do while loop to sort out same numbers in the array
			if (i < 5)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 1;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 1;
				}

			}
			// Random Number Generator of first section (seats from 51-100)
			// do while loop to sort out same numbers in the array
			else if (i < 10)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 51;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 51;
				}
			}
			// Random Number Generator of first section (seats from 101-150)
			// do while loop to sort out same numbers in the array
			else if (i < 15)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 101;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 101;
				}
			}
			// Random Number Generator of first section (seats from 151-200)
			// do while loop to sort out same numbers in the array
			else if (i < 20)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 151;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 151;
				}
			}
			// Random Number Generator of first section (seats from 201-250)
			// do while loop to sort out same numbers in the array
			else if (i < 25)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 201;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 201;
				}
			}
			// Random Number Generator of first section (seats from 251-300)
			// do while loop to sort out same numbers in the array
			else if (i < 30)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 251;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 251;
				}
			}
		}
		return randNum;
	}
	// Random Number Generator of Aircraft AU304
	else if (arg == "AU304" || arg == "au304" || arg == "Au304" || arg == "aU304")
	{
	// Random Number Array Declaration
		static int randNum[40];
		for (int i = 0; i < 40; i++)
		{
			// Random Number Generator of first section(seats from 1 - 50)
			// do while loop to sort out same numbers in the array
			if (i < 5)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 1;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 1;
				}

			}
			// Random Number Generator of first section(seats from 51 - 100)
			// do while loop to sort out same numbers in the array
			else if (i < 10)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 51;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 51;
				}
			}
			// Random Number Generator of first section(seats from 101 - 150)
			// do while loop to sort out same numbers in the array
			else if (i < 15)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 101;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 101;
				}
			}
			// Random Number Generator of first section(seats from 151 - 200)
			// do while loop to sort out same numbers in the array
			else if (i < 20)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 151;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 151;
				}
			}
			// Random Number Generator of first section(seats from 201 - 250)
			// do while loop to sort out same numbers in the array
			else if (i < 25)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 201;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 201;
				}
			}
			// Random Number Generator of first section(seats from 251 - 300)
			// do while loop to sort out same numbers in the array
			else if (i < 30)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 251;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 251;
				}
			}
			// Random Number Generator of first section(seats from 301 - 350)
			// do while loop to sort out same numbers in the array
			else if (i < 35)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 301;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 301;
				}
			}
			// Random Number Generator of first section(seats from 351 - 400)
			// do while loop to sort out same numbers in the array
			else if (i < 40)
			{
				bool duplicate_check = false;

				do
				{
					randNum[i] = rand() % 50 + 351;

					//duplicate check
					int j = 0;
					if (i != j)
					{
						for (j = 0; j < i; j++)
						{
							if (randNum[i] == randNum[j])
							{
								duplicate_check = true;
							}
						}
					}
				} 
				while (duplicate_check);
				if (duplicate_check == false)
				{
					continue;
				}
				else
				{
					randNum[i] = rand() % 50 + 351;
				}
			}
		}
		return randNum;
	}
	//When the Argument is invalid (Wrong type of aircraft input)
	else {
		cout << "The flight number input is invalid";
		return 0;
	}
}

bool tempCheck()
{
	// Function Variables
	bool result = false;
	double tempt;

	//  Opening and reading temperature data from the directory
	ifstream temp_data;
	temp_data.open("C:\\Users\\jis06\\Desktop\\Semester Project\\Temperature Data.txt");

	// Sorting process to evaluate whether the passenger has temperature greater than 37.5 degree celcius
	while (!temp_data.eof())
	{
		temp_data >> tempt;
		if (tempt > 37.5)
		{
			result = true;
			break;
		}
	}
	// Closing Temperature data
	temp_data.close();
	return result;
	
}

bool screeningTest()
{
	//Function Variables
	bool result = false;
	char ans_firstQ;
	char ans_secondQ;
	char ans_thirdQ;
	char ans_fourthQ;

	// Screening Test Questionnaires
	cout << endl << endl << "AU airport COVID-19 Screening Test" << endl << endl;

	// First Question
	cout << "1. Do you have any of these symptoms listed below? (Enter Y or yes or N for no)" << endl;
	cout << "\t" << "Fever or chills" << endl << "\t" << "Cough" << endl << "\t" << "Shortness of breath or difficulty breathing" << endl << "\t";
	cout << "Fatigue" << endl << "\t" << "Muscle or body aches" << endl << "\t" << "Headache" << endl << "\t" << "Recent loss of taste or smell" << endl << "\t";
	cout << "Sore throat" << endl << "\t" << "Congestion" << endl << "\t" << "Nausea or vomiting" << endl << "\t" << "Diarrhea" << endl << endl;
	cout << "Your response: ";
		cin >> ans_firstQ;

		// Evaluating whether the input from the user is appropriate
		while (ans_firstQ != 'Y' && ans_firstQ != 'y' && ans_firstQ != 'n' && ans_firstQ != 'N')
		{
			cout << endl << "Wrong Input. Please enter either Y for yes or N for no." << endl << "Your response: ";
			cin >> ans_firstQ;
		}

		// Second Question
		cout << endl << "2. Within the past 14 days, have you had contact with anyone that you know had COVID-19 or COVID-like symptoms?" << endl;
		cout << "Contact is being 6 feet (2 meters) or closer for more than 15 minutes with a person, or having direct contact" << endl;
		cout << "with fluids from a person with COVID-19" << "(for exammple, being coughed or sneezed on)." << endl << endl;
		cout << "Your response: ";
		cin >> ans_secondQ;

		// Evaluating whether the input from the user is appropriate
		while (ans_secondQ != 'Y' && ans_secondQ != 'y' && ans_secondQ != 'n' && ans_secondQ != 'N')
		{
			cout << endl << "Wrong Input. Please enter either Y for yes or N for no." << endl << "Your response: ";
			cin >> ans_secondQ;
		}

		// Third Question
		cout << endl << "3. Have you had a positive COVID-19 test for active virus in the past 10 days?";
		cout << endl << endl << "Your response: ";
		cin >> ans_thirdQ;

		// Evaluating whether the input from the user is appropriate
		while (ans_thirdQ != 'Y' && ans_thirdQ != 'y' && ans_thirdQ != 'n' && ans_thirdQ != 'N')
		{
			cout << endl << "Wrong Input. Please enter either Y for yes or N for no." << endl << "Your response: ";
			cin >> ans_thirdQ;
		}
		
		//Fourth Question 
		cout << endl << "4. Within the past 14 days, has a public health or medical professional told you to self-monitor, self-isolate, or" << endl << "self-quarantine because of concerns about COVID-19 infections?";
		cout << endl << endl << "Your response: ";
		cin >> ans_fourthQ;

		// Evaluating whether the input from the user is appropriate
		while (ans_fourthQ != 'Y' && ans_fourthQ != 'y' && ans_fourthQ != 'n' && ans_fourthQ != 'N')
		{
			cout << endl << "Wrong Input. Please enter either Y for yes or N for no." << endl << "Your response: ";
			cin >> ans_fourthQ;
		}

		//Evaluating whether the user passes the test
		if ((ans_firstQ == 'y' || ans_firstQ == 'Y') || (ans_secondQ == 'y' || ans_secondQ == 'Y') || (ans_thirdQ == 'y' || ans_thirdQ == 'Y') || (ans_fourthQ == 'y' || ans_fourthQ == 'Y'))
		{
			result = true;
		}
	return result;
}
int main()
{
	// Input Passenger Information & Using accessor function to retreive plane information
	passenger p_info;
	p_info.userInput();
	int seatNum = p_info.getSeatNum();
	string pass_flightNum = p_info.getflightNum();

	// Initializing Variables
	int seat_total = 0;
	int passenger_token = 0;

	// Determining the maximum number of seats in the aircraft which the passenger used
	if (pass_flightNum == "AU301" || pass_flightNum == "Au301" || pass_flightNum == "aU301" || pass_flightNum == "au301")
	{
		seat_total = 100;	
	}
	else if (pass_flightNum == "AU302" || pass_flightNum == "Au302" || pass_flightNum == "aU302" || pass_flightNum == "au302")
	{
		seat_total = 200;	
	}
	else if (pass_flightNum == "AU303" || pass_flightNum == "Au303" || pass_flightNum == "aU303" || pass_flightNum == "au303")
	{
		seat_total = 300;
	}
	else if (pass_flightNum == "AU304" || pass_flightNum == "Au304" || pass_flightNum == "aU304" || pass_flightNum == "au304")
	{
		seat_total = 400;
	}

	// Determining the number of Diagnostic Testing for the Aircraft
	int numPhys_testing = (int) seat_total / 10;

	// Picking random numbers for the diagnostic testing
	int* randNum = randNumGen(pass_flightNum);

	// Creating a vector and assigning the random numbers
	vector<int> rand_numSelected;
	rand_numSelected.assign(numPhys_testing, 100);
	for (unsigned int i = 0; i < numPhys_testing; i++)
	{
		rand_numSelected[i] = *(randNum + i);
	}

	// Checking whether the random number generated matches the seat number of the passenger
	for (int i = 0; i < numPhys_testing; i++)
	{
		// Passenger seat number matches the random number
		if (rand_numSelected[i] == seatNum)
		{
			passenger_token = 1;
			break;
		}
		// Passenger seat number does not match the random number
		else
		{
			passenger_token = 0;
		}
	}

	// The passenger is chosen to take diagnostic test with the token value 1
	if (passenger_token == 1)
	{
		p_info.diagnostic_summary();
	}

	// Temperature check and screening test is given to the passenger with token value 0
	else
	{
		bool temp_result = tempCheck();
		bool screen_result = screeningTest();
		p_info.screening_summary(temp_result, screen_result);
	}

}

// User Input for the passenger
void passenger::userInput()
{
	cout << "Welcome to Auburn Airport!" << endl << "Please enter the following information" << endl << endl << "Input your name (Last, First Name): ";
	std::getline(cin, name);
	cout << "Input your place of origin: ";
	std::getline(cin, placeOfOrigin);
	cout << "Input your flight number: ";
	cin >> flightNum;
	// A while-loop is used to determine whether the input from the user is appropriate. If it is not appropriate, the program will ask the user to type the correct response
	while (flightNum != "AU301" && flightNum != "Au301" && flightNum != "aU301" && flightNum != "au301" && flightNum != "AU302" && flightNum != "Au302" && flightNum != "aU302" && flightNum != "au302" && flightNum != "AU303" && flightNum != "Au303" && flightNum != "aU303" && flightNum != "au303" && flightNum != "AU304" && flightNum != "Au304" && flightNum != "aU304" && flightNum != "au304")
	{
		cout << "Wrong Input, Please Enter the flight number again";
		cin >> flightNum;
	}
	cout << "Input your seat number: ";
	cin >> seatNum;
	if (flightNum == "AU301" || flightNum == "Au301" || flightNum == "aU301" || flightNum == "au301") {
		while (seatNum < 1 || seatNum > 100) {
			cout << "Wrong Input, Please Enter the seat number again: ";
			cin >> seatNum;
		}
	}
	if (flightNum == "AU302" || flightNum == "Au302" || flightNum == "aU302" || flightNum == "au302") {
		while (seatNum < 1 || seatNum > 200) {
			cout << "Wrong Input, Please Enter the seat number again: ";
			cin >> seatNum;
		}
	}
	if (flightNum == "AU303" || flightNum == "Au303" || flightNum == "aU303" || flightNum == "au303") {
		while (seatNum < 1 || seatNum > 300) {
			cout << "Wrong Input, Please Enter the seat number again: ";
			cin >> seatNum;
		}
	}
	if (flightNum == "AU304" || flightNum == "Au304" || flightNum == "aU304" || flightNum == "au304") {
		while (seatNum < 1 || seatNum > 400) {
			cout << "Wrong Input, Please Enter the seat number again: ";
			cin >> seatNum;
		}
	}
	
}

// Accessor #1
string passenger::getflightNum()
{
	string plane_num = flightNum;
	return plane_num;
}

// Accessor #2
int passenger::getSeatNum()
{
	int result = seatNum;
	return result;
}


void passenger::screening_summary(bool temp_result, bool questionaire_result)
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "SUMMARY" << endl << endl << endl;

	// Screening Test Summary when the result is positive and the temperature reading is abnormal
	if (temp_result == true && questionaire_result == true)
	{
		cout << "You might be infected with COVID-19 after the evaluation." << endl;
		cout << "Do not remove your mask and keep yourself 6 ft distance from other people." << endl;
		cout << "Please move to diagnostic testing area and bring your boarding pass and testing number to the health inspector" << endl;
		cout << "Testing Number: " << "STF" << flightNum << seatNum <<endl << endl;
		cout << "Thank you for your cooperation and have a good day!";
	}

	// Screening Test Summary when the result is negative while the temperature reading is abnormal
	else if (temp_result == false && questionaire_result == true)
	{
		cout << "You might be infected with COVID-19 after the evaluation." << endl;
		cout << "Do not remove your mask and keep yourself 6 ft distance from other people." << endl;
		cout << "Please move to diagnostic testing area and bring your boarding pass and testing number to the health inspector" << endl;
		cout << "Testing Number: " << "STF" << flightNum << seatNum << endl << endl;
		cout << "Thank you for your cooperation and have a good day!";
	}

	// Screening Test Summary where the test result is positive but the temperature reading is normal
	else if (temp_result == true && questionaire_result == false)
	{
		cout << "You might be infected with COVID-19 after the evaluation." << endl;
		cout << "Do not remove your mask and keep yourself 6 ft distance from other people." << endl;
		cout << "Please move to diagnostic testing area and bring your boarding pass and testing number to the health inspector" << endl;
		cout << "Testing Number: " << "STF" << flightNum << seatNum << endl << endl;
		cout << "Thank you for your cooperation and have a good day!";
	}
	
	// Screening Test Summary where the test result is negative and the temperature reading is normal 
	else
	{
		cout << "You have successfully completed COVID-19 screening test. The test result indicates that you are not infected with COVID-19" << endl;
		cout << "Please move proceed to the immigration procedures and provide the Testing number to the immigration officer." << endl;
		cout << "Testing Number: " << "STP" << flightNum << seatNum << endl << endl;
		cout << "Do not remove your mask and keep yourself 6 ft distance from other people." << endl;
		cout << "Thank you for your cooperation and have a good day!";
	}
	cout << endl << endl << endl;
}

void passenger::diagnostic_summary()
{
	// Diagnostic Test Summary
	cout << endl << endl << endl << "You have been randomly selected to conduct diagnostic testing." << endl << "Please bring your boarding pass and testing number to the health inspector";
	cout << endl << "Testing Number: " << "DT" << flightNum << seatNum << endl << endl;
	cout << "Thank you for you cooperation and have a good day!" << endl << endl;
}
