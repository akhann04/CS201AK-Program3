//NAME: Aleeza Khan 
//DATE: August 29, 2024 
//PROGRAM 3 DISTANCE 
//DESCRIPTION: The point of this code is to allow the user to either enter 4 numbers of
//their own choice or allow the computer to genter 4 numbers for them and from there it 
//would be seperated into 2 points and then the computer will then decide which point 
//(point 1 or point 2) is closer to the origin 


#include <iostream>
#include <cmath>
using namespace std;

//Generate 4 random values : x1, y1, x2, and y2 which are coordinate points :
//(x1, y1) and (x2, y2) where each value is an integer between - 10 and 10, inclusive.
	//b.Calculate the distance of each point to the origin
	//c.Print each point, its distance to the origin& which point(1 or 2) is closer to the
	//origin
	//d.Loop until the user decides to quit
	//e.Bonus: allow the user to decide to enter these 4 values or let the program
	//generate them.If the user enters them, then the values are verified to be
	//numeric



//int main() {

	//int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	//float dist1, dist2;
	//char userChoice = 'y';

	//while (userChoice == 'y') {
		//cout << "Choose how you would like to get the 4 number? (r is random numbers/e is to enter manually)" << endl;
		/////cout << "Do you want to go again?" << endl; 
		//cin >> userChoice;


		//if (userChoice == 'e') {
		//	cout << "Enter numbers between 10 and -10" << endl;
		//	cin >> x1 >> y1 >> x2 >> y2;

		//	if ((x1 > 10 || x1 < -10) || (y1 > 10 || y1 < -10) || (x2 > 10 || x2 < -10) || (y2 > 10 || y2 < -10)) {

			//	cout << "Your numbers should be between 10 and -10: " << endl;
				
			//}


		//}
		//else if (userChoice == 'r') {
		//	srand(time(0));
		//	x1 = rand() % 21 - 10;
		//	y1 = rand() % 21 - 10;
		//	x2 = rand() % 21 - 10;
		//	y2 = rand() % 21 - 10;

		//	cout << "Your 4 random numbers are: " << x1 << " " << y1 << " " << x2 << " " << y2 << " " << endl;

		//}

		//dist1 = sqrt(x1 * x1) + (y1 * y1);

		//dist2 = sqrt(x2 * x2) + (y2 * y2);

		
		//cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;

		//cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;

		//if (dist1 > dist2) {
			//cout << "Point 1 is closer to the origin" << endl;
		//}
		//else if (dist2 > dist1) {
			//cout << "Point 2 is closer to the origin" << endl;



		//}
		//else {
		//	cout << "Both points are at the same distance" << endl;
		//}


		//cout << "Do you want to go again?" << endl;
		//cin >> userChoice;
	//}


	//return 0;








//}



int main() {
	
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0; 
	float dist1, dist2; 
	char userChoice = 'y'; 

	while (userChoice == 'y') {
		cout << "How you like to get the 4 numbers? (r is for random numbers/ e to enter manually" << endl;
		cin >> userChoice; 

		if (userChoice == 'e') {
			cout << "Enter numbers between 10 and -10: ";
			cin >> x1 >> x2 >> y1 >> y2;

			if ((x1 > 10 || x1 < -10) || (y1 > 10 || y1 < -10) ||
				(x2 > 10 || x2 < -10) || (y2 > 10 || y2 < -10)) {
				cout << "Numbers should be in between 10 and -10" << endl;

			}
		
		
		} else if (userChoice == 'r') {
				srand(time(0));
				x1 = rand() & 21 - 10;
				x2 = rand() & 21 - 10;
				y1 = rand() & 21 - 10;
				y2 = rand() & 21 - 10;
				cout << "Your 4 random numbers are: " << x1 << " " << y1 << " " << x2 << " " << y2 << " " << endl;



			}
			
			dist1 = sqrt(x1 * x1) + (y1 * y1);

			dist2 = sqrt(x2 * x2) + (y2 * y2);

			cout << "Point 1: (" << x1 << " " << " , " << y1 << " )" << endl;
			cout << "Point 2: (" << x2 << " " << " , " << y2 << " )" << endl;




			if (dist1 < dist2) {  
				cout << "Point 1 is closer to the origin" << endl;
			}
			else if (dist2 < dist1) { 
				cout << "Point 2 is closer to the origin" << endl;
			}
			else {
				cout << "Both points are at the same distance" << endl;
			}
			cout << "Would you to try again?" << endl;
			cin >> userChoice;
		}
