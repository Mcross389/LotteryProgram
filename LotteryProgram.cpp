#include "Header.h"

// Function Declarations (Function Definitions = bottom of code.)
void fillVector(vector<int>&, int[], int, int);
void prevWinningNumbers(vector<int>&, vector<int>&, vector<int>&, vector<int>&, int, int, int);
void mapCtEmplace(multimap<int, int>&, vector<int>&, int);
void nestedRowFill(multimap<int, int>&, vector<int>&, vector<int>&);
void magicTrackingNumber(bool, vector<vector<int>>&, vector<vector<int>>&, int, int, int);



int main() {

	HWND consoleWindow = GetConsoleWindow();

	SetWindowPos(consoleWindow, 0, 50, 50, 600, 600, NULL | NULL);

	system("color f0");

	string tempsavefile = "C:/Users/Matthew/Desktop/Test Save File.txt";
	string permsavefile = "C:/Users/Matthew/Desktop/Fantasy Five Save File.txt";

	double vecdelassign;

	cout << "How many years would you like to check?(0.0-20.0): ";

	cin >> vecdelassign;

	while (vecdelassign > 20) {
		cout << endl << "Data is not sufficient past 20 years." << endl << endl;
		cout << "How many years would you like to check?(0.0-20.0): "; cin >> vecdelassign; cout << endl << endl;
	}

	int vecdel1 = vecdelassign * 365,
		vecdel2 = vecdelassign * 365,
		vecdel3 = vecdelassign * 365,
		vecdel4 = vecdelassign * 365,
		vecdel5 = vecdelassign * 365;

	if (vecdelassign != 20) {
		myfile.open(tempsavefile, std::ofstream::trunc);
		myfile.close();
	}
	else {
		myfile.open(permsavefile, std::ofstream::trunc);
		myfile.close();
	}





	double vec_del_static = vecdel1;
	int count_vecdel = 0;

	while (past_check) {

		vector<int> V1, V2, V3, V4, V5;

		//fill vectors with set arrays of FF numbers 1-5 then resizes to desired length according to int vecdel.
		fillVector(V1, arr1, fifth_arr_size, vecdel1);
		fillVector(V2, arr2, fifth_arr_size, vecdel2);
		fillVector(V3, arr3, fifth_arr_size, vecdel3);
		fillVector(V4, arr4, fifth_arr_size, vecdel4);
		fillVector(V5, arr5, fifth_arr_size, vecdel5);


		int parse_number1 = V1[1],
			parse_number2 = V2[1],
			parse_number3 = V3[1],
			parse_number4 = V4[1],
			parse_number5 = V5[1],

			magic_number1 = V1[0],
			magic_number2 = V2[0],
			magic_number3 = V3[0],
			magic_number4 = V4[0],
			magic_number5 = V5[0];

		V1[0] = 0;
		V2[0] = 0;
		V3[0] = 0;
		V4[0] = 0;
		V5[0] = 0;

		vector<int> new_V1 = V1,
			new_V2 = V2,
			new_V3 = V3,
			new_V4 = V4,
			new_V5 = V5;

		vector<int> x_distance1,
			x_distance2,
			x_distance3,
			x_distance4,
			x_distance5,
			y_distance1,
			y_distance2,
			y_distance3,
			y_distance4,
			y_distance5;

		int parse_count1 = count(V1.begin(), V1.end(), parse_number1),
			parse_count2 = count(V2.begin(), V2.end(), parse_number2),
			parse_count3 = count(V3.begin(), V3.end(), parse_number3),
			parse_count4 = count(V4.begin(), V4.end(), parse_number4),
			parse_count5 = count(V5.begin(), V5.end(), parse_number5);

		int parse_increm1 = 0,
			parse_increm2 = 0,
			parse_increm3 = 0,
			parse_increm4 = 0,
			parse_increm5 = 0;

		prevWinningNumbers(V1, x_distance1, new_V1, y_distance1, parse_increm1, parse_count1, parse_number1);
		prevWinningNumbers(V2, x_distance2, new_V2, y_distance2, parse_increm2, parse_count2, parse_number2);
		prevWinningNumbers(V3, x_distance3, new_V3, y_distance3, parse_increm3, parse_count3, parse_number3);
		prevWinningNumbers(V4, x_distance4, new_V4, y_distance4, parse_increm4, parse_count4, parse_number4);
		prevWinningNumbers(V5, x_distance5, new_V5, y_distance5, parse_increm5, parse_count5, parse_number5);

		int g1 = 0,
			g2 = 0,
			g3 = 0,
			g4 = 0,
			g5 = 0;

		multimap<int, int> end_map1,
			end_map2,
			end_map3,
			end_map4,
			end_map5;

		mapCtEmplace(end_map1, y_distance1, g1);
		mapCtEmplace(end_map2, y_distance2, g2);
		mapCtEmplace(end_map3, y_distance3, g3);
		mapCtEmplace(end_map4, y_distance4, g4);
		mapCtEmplace(end_map5, y_distance5, g5);

		while (end_map1.size() != 5) {
			end_map1.erase(end_map1.begin());
		}

		while (end_map2.size() != 5) {
			end_map2.erase(end_map2.begin());
		}

		while (end_map3.size() != 5) {
			end_map3.erase(end_map3.begin());
		}

		while (end_map4.size() != 5) {
			end_map4.erase(end_map4.begin());
		}

		while (end_map5.size() != 5) {
			end_map5.erase(end_map5.begin());
		}

		vector<int> vec_row1,
			vec_row2,
			vec_row3,
			vec_row4,
			vec_row5;

		nestedRowFill(end_map1, vec_row1, vec_row11);
		nestedRowFill(end_map2, vec_row2, vec_row22);
		nestedRowFill(end_map3, vec_row3, vec_row33);
		nestedRowFill(end_map4, vec_row4, vec_row44);
		nestedRowFill(end_map5, vec_row5, vec_row55);

		vec_nest.push_back(vec_row1);
		vec_nest.push_back(vec_row2);
		vec_nest.push_back(vec_row3);
		vec_nest.push_back(vec_row4);
		vec_nest.push_back(vec_row5);

		if (vec_nest2.size() != 5) {
			vec_nest2.push_back(vec_row11);
			vec_nest2.push_back(vec_row22);
			vec_nest2.push_back(vec_row33);
			vec_nest2.push_back(vec_row44);
			vec_nest2.push_back(vec_row55);
		}


		int whatevs = 0;
		int first_a = 0, first_b = 0,
			second_a = 0, second_b = 0,
			third_a = 0, third_b = 0,
			fourth_a = 0, fourth_b = 0,
			fifth_a = 0, fifth_b = 0;

		bool magic_true1 = true,
			magic_true2 = true,
			magic_true3 = true,
			magic_true4 = true,
			magic_true5 = true;


		magicTrackingNumber(magic_true1, vec_nest, vec_nest2, first_a, first_b, magic_number1);
		magicTrackingNumber(magic_true2, vec_nest, vec_nest2, second_a, second_b, magic_number2);
		magicTrackingNumber(magic_true3, vec_nest, vec_nest2, third_a, third_b, magic_number3);
		magicTrackingNumber(magic_true4, vec_nest, vec_nest2, fourth_a, fourth_b, magic_number4);
		magicTrackingNumber(magic_true5, vec_nest, vec_nest2, fifth_a, fifth_b, magic_number5);


		int magicyes1 = 0;
		int magicyes2 = 0;
		int magicyes3 = 0;
		int magicyes4 = 0;
		int magicyes5 = 0;

		bool mag_true1 = true,
			mag_true2 = true,
			mag_true3 = true,
			mag_true4 = true,
			mag_true5 = true;

		vector<int>::iterator vec_it;

		vec_it = vec_row1.begin();
		while (vec_it != vec_row1.end()) { if (*vec_it == magic_number1) { magicyes1++; }vec_it++; }

		vec_it = vec_row2.begin();
		while (vec_it != vec_row2.end()) { if (*vec_it == magic_number2) { magicyes2++; }vec_it++; }

		vec_it = vec_row3.begin();
		while (vec_it != vec_row3.end()) { if (*vec_it == magic_number3) { magicyes3++; }vec_it++; }

		vec_it = vec_row4.begin();
		while (vec_it != vec_row4.end()) { if (*vec_it == magic_number4) { magicyes4++; }vec_it++; }

		vec_it = vec_row5.begin();
		while (vec_it != vec_row5.end()) { if (*vec_it == magic_number5) { magicyes5++; }vec_it++; }

		if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 >= 1) {

			if (vecdelassign != 20) { myfile.open(tempsavefile, std::ofstream::app); }
			else { myfile.open(permsavefile, std::ofstream::app); }

			myfile << endl << "Vec-Nest " << vecdel1;

			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 5) { myfile << "   $$$$$"; moneyhits1++; }
			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 4) { myfile << "   $$$$"; moneyhits2++; }
			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 3) { myfile << "   $$$"; moneyhits3++; }
			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 2) { myfile << "   $$"; moneyhits4++; }
			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 1) { myfile << "   $"; moneyhits5++; }
			if (magicyes1 + magicyes2 + magicyes3 + magicyes4 + magicyes5 == 0) { myfile << "   -$"; moneyhits6++; }
			myfile << endl << endl;

			myfile << vec_nest[0][0] << ", " << vec_nest[1][0] << ", " << vec_nest[2][0] << ", " << vec_nest[3][0] << ", " << vec_nest[4][0] << endl;
			myfile << vec_nest[0][1] << ", " << vec_nest[1][1] << ", " << vec_nest[2][1] << ", " << vec_nest[3][1] << ", " << vec_nest[4][1] << endl;
			myfile << vec_nest[0][2] << ", " << vec_nest[1][2] << ", " << vec_nest[2][2] << ", " << vec_nest[3][2] << ", " << vec_nest[4][2] << endl;
			myfile << vec_nest[0][3] << ", " << vec_nest[1][3] << ", " << vec_nest[2][3] << ", " << vec_nest[3][3] << ", " << vec_nest[4][3] << endl;
			myfile << vec_nest[0][4] << ", " << vec_nest[1][4] << ", " << vec_nest[2][4] << ", " << vec_nest[3][4] << ", " << vec_nest[4][4] << endl;
			myfile << endl;

			myfile << vec_nest2[0][0] << ", " << vec_nest2[1][0] << ", " << vec_nest2[2][0] << ", " << vec_nest2[3][0] << ", " << vec_nest2[4][0] << endl;
			myfile << vec_nest2[0][1] << ", " << vec_nest2[1][1] << ", " << vec_nest2[2][1] << ", " << vec_nest2[3][1] << ", " << vec_nest2[4][1] << endl;
			myfile << vec_nest2[0][2] << ", " << vec_nest2[1][2] << ", " << vec_nest2[2][2] << ", " << vec_nest2[3][2] << ", " << vec_nest2[4][2] << endl;
			myfile << vec_nest2[0][3] << ", " << vec_nest2[1][3] << ", " << vec_nest2[2][3] << ", " << vec_nest2[3][3] << ", " << vec_nest2[4][3] << endl;
			myfile << vec_nest2[0][4] << ", " << vec_nest2[1][4] << ", " << vec_nest2[2][4] << ", " << vec_nest2[3][4] << ", " << vec_nest2[4][4] << endl;

			myfile << endl << "Winning Numbers: " << magic_number1 << ", " << magic_number2 << ", "
				<< magic_number3 << ", " << magic_number4 << ", " << magic_number5 << endl;

			myfile.close();
		}

		if (count_vecdel != vec_del_static) {
			++count_vecdel;
			cout << "Progress: " << std::fixed << std::setprecision(4) << count_vecdel / vec_del_static * 100 << "%" << "\r";
		}

		if (vecdel1 != 0) { vec_nest.clear(); }
		vecdel1 -= 1;
		vecdel2 -= 1;
		vecdel3 -= 1;
		vecdel4 -= 1;
		vecdel5 -= 1;

		if (vecdel1 == -1) { past_check = false; }

	}

	if (vecdelassign != 20) { myfile.open(tempsavefile, std::ofstream::app); }
	else { myfile.open(permsavefile, std::ofstream::app); }

	myfile << endl << "Possible Numbers: " << endl << endl;
	myfile << vec_nest[0][0] << ", " << vec_nest[1][0] << ", " << vec_nest[2][0] << ", " << vec_nest[3][0] << ", " << vec_nest[4][0] << endl;
	myfile << vec_nest[0][1] << ", " << vec_nest[1][1] << ", " << vec_nest[2][1] << ", " << vec_nest[3][1] << ", " << vec_nest[4][1] << endl;
	myfile << vec_nest[0][2] << ", " << vec_nest[1][2] << ", " << vec_nest[2][2] << ", " << vec_nest[3][2] << ", " << vec_nest[4][2] << endl;
	myfile << vec_nest[0][3] << ", " << vec_nest[1][3] << ", " << vec_nest[2][3] << ", " << vec_nest[3][3] << ", " << vec_nest[4][3] << endl;
	myfile << vec_nest[0][4] << ", " << vec_nest[1][4] << ", " << vec_nest[2][4] << ", " << vec_nest[3][4] << ", " << vec_nest[4][4] << endl;

	myfile << endl << "Possible Number Locations: " << endl << endl
		<< vec_nest2[0][0] << ", " << vec_nest2[1][0] << ", " << vec_nest2[2][0] << ", " << vec_nest2[3][0] << ", " << vec_nest2[4][0] << endl
		<< vec_nest2[0][1] << ", " << vec_nest2[1][1] << ", " << vec_nest2[2][1] << ", " << vec_nest2[3][1] << ", " << vec_nest2[4][1] << endl
		<< vec_nest2[0][2] << ", " << vec_nest2[1][2] << ", " << vec_nest2[2][2] << ", " << vec_nest2[3][2] << ", " << vec_nest2[4][2] << endl
		<< vec_nest2[0][3] << ", " << vec_nest2[1][3] << ", " << vec_nest2[2][3] << ", " << vec_nest2[3][3] << ", " << vec_nest2[4][3] << endl
		<< vec_nest2[0][4] << ", " << vec_nest2[1][4] << ", " << vec_nest2[2][4] << ", " << vec_nest2[3][4] << ", " << vec_nest2[4][4] << endl
		<< endl;
	myfile << "Total number of no numbers hit:    " << moneyhits6 << endl
		<< "Total number of at least 1/5 hits: " << moneyhits5 << endl
		<< "Total number of at least 2/5 hits: " << moneyhits4 << endl
		<< "Total number of at least 3/5 hits: " << moneyhits3 << endl
		<< "Total number of at least 4/5 hits: " << moneyhits2 << endl
		<< "Total number of 5/5 hits: " << moneyhits1 << endl << endl;

	//myfile << timestamp << endl;

	myfile.close();


	cout << endl << "Completed." << endl;

	cout << "Press Esc key to exit program." << endl;

	char esc;
	bool combine_true = true;
	while (combine_true) {
		esc = _getch();
		if (esc == 27) { combine_true = false; }

	}
	system("pause");
	return 0;
}

void fillVector(vector<int>& myVector, int myArray[], int arraySize, int vecdelete) {//copies elements of static arrays to vectors

	int myInt = 0;

	while (myInt != arraySize) {
		myVector.push_back(myArray[myInt]);
		myInt++;
	}

	myVector.erase(myVector.begin(), myVector.begin() + vecdelete);
};

void prevWinningNumbers(vector<int>& myVector1, vector<int>& myVector2, vector<int>& myVector3, vector<int>& myVector4,
	int myInt1, int myInt2, int myInt3) {//finds and push_backs numbers after the hit numbers.

	while (myInt1 != myInt2) {
		myInt1++;
		auto vDistance = find(myVector1.begin(), myVector1.end(), myInt3);
		vDistance += 1;
		int first_dist = distance(myVector1.begin(), vDistance);
		myVector1.erase(myVector1.begin(), vDistance);
		myVector2.push_back(first_dist);
		int dist_accum = accumulate(myVector2.begin(), myVector2.end(), 0);
		int first_dist2 = myVector3[dist_accum - 2];
		myVector4.push_back(first_dist2);
	}

	sort(myVector4.begin(), myVector4.end());
};

void mapCtEmplace(multimap<int, int>& myMap, vector<int>& myVec, int mapInt) {//makes a pair of largest hit numbers and amount of hits.

	while (mapInt != 40) {
		int y = count(myVec.begin(), myVec.end(), mapInt);
		myMap.emplace(pair<int, int>(y, mapInt));
		mapInt++;
	}
};

void nestedRowFill(multimap<int, int>& myMap, vector<int>& myVec, vector<int>& myVec2) {//fills vectors with largest hit numbers to be nested for later use.

	multimap<int, int>::iterator map_it = myMap.begin();

	while (map_it != myMap.end()) {
		myVec.push_back(map_it->second);
		map_it->second = 0;
		if (myVec2.size() != 5)myVec2.push_back(map_it->second);
		map_it++;
	}
};

void magicTrackingNumber(bool myBool, vector<vector<int>>& myVecNest1, vector<vector<int>>& myVecNest2,
	int myInt1, int myInt2, int myInt3) {

	while (myBool) {

		if (myVecNest1[myInt1][myInt2] == myInt3) {
			myVecNest2[myInt1][myInt2]++;
		}
		myInt2++;

		if (myInt2 == 5) {
			if (myInt1 == 4 && myInt2 == 5) { myBool = false; }
			myInt1++;
			myInt2 = 0;
		}
	}



}