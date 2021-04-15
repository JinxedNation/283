#include <iostream>
#include <fstream>
#include "Unit.h"           // Unit       ` class declaration
#include "Registration.h"  // Registration class declaration

int main()
{
    ifstream infile("rinput.txt");

    if (!infile)
    {
        return -1;
    }
    Registration R;
    infile >> R;


    ofstream ofile("routput.txt");
    ofile << R
        << "Number of Results = " << R.GetCount() << '\n'
        << "Total credits     = " << R.GetCredits() << '\n';


}