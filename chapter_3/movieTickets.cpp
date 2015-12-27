//
// Created by Rafeh Qazi on 12/26/15.
//

#include "movieTickets.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


int movieSalesReport() {
    for (int i = 0; i < 28; i++) {
        cout << "_*";
    }
    cout << endl;
    string movie = "Journey to Mars";
    cout << setfill('.') << left << setw(35) << "Movie Name: " << right << " " << movie << endl;
    return 0;

    ofstream moviesReport;
    string movieName;
    double adultTicketPrice, childTicketPrice;
    int noOfAdultTicketSold, noOfChildTicketSold, grossPercentageToDonate;

    cout << "Name of the movie: ";
    cin >> movieName;

    cout << "Adult ticket price: ";
    cin >> adultTicketPrice;

    cout << "Child ticket price: ";
    cin >> childTicketPrice;

    cout << "Number of adult tickets sold: ";
    cin >> noOfAdultTicketSold;

    cout << "Number of child tickets sold: ";
    cin >> noOfChildTicketSold;

    cout << "Gross percentage that you would like to donate: ";
    cin >> grossPercentageToDonate;


    moviesReport.open("Movies_Report.out", ios::app);  // ios::app --> appends output to the end of the file.
    moviesReport << "Placeholder" << endl;
    // Make it look nice.
    moviesReport.close();
    return 0;
}
