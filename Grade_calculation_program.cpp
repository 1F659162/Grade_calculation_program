#include <iostream>
using namespace std;
int main()
{
	int score;

	cout << "\n_______Program calculation grade_______" << endl ;
	cout << "\n Enter score : ";
	cin >> score;

	if (score <= 100 && score >= 90) cout << " Your grade is \'A\'" << endl;
	else if (score < 90 && score >= 80) cout << " Your grade is \'B\'" << endl;
	else if (score < 80 && score >= 70) cout << " Your grade is \'C\'" << endl;
	else if (score < 70 && score >= 60) cout << " Your grade is \'D\'" << endl;
	else if (score < 60 && score >= 0 ) cout << " Your grade is \'F\'" << endl;
	else if (score > 100 || score < 0) cout << "  !!! ERROR !!!" << endl;
	
	cout << "_______________________________________\n\n";

	return(0);
}

//Kaittrakul jaroenpong IT_1RA 6206021620159