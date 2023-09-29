/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

struct dataMovie{
    string movieID;
    string movieTitle;
    string director;
    int year;
    float rate;
};

int main(){
    dataMovie movie[6] = {{"MCUIM-01", "Iron Man                          ", "Jon Favreau    ", 2008, 7.9},
                          {"MCUIH-02", "The Incredible Hulk               ", "Louis Leterrier", 2008, 6.7},
                          {"MCUIM-03", "Iron Man 2                        ", "Jon Favreau    ", 2010, 7.0},
                          {"MCUTh-04", "Thor                              ", "Kenneth Branagh", 2011, 7.0},
                          {"MCUCA-05", "Captain America: The First Avenger", "Joe Johnston   ", 2011, 6.9},
                          {"MCUAv-06", "The Avengers                      ", "Joss Whedon    ", 2012, 8.0}};

    cout << "Movie ID\tMovie Title\t\t\t\t\tDirector\t\tYear\tIMDB Rate" << endl;
    for(int i = 0; i < 6; i++){
        cout << movie[i].movieID << "\t" 
        << movie[i].movieTitle << "\t\t" 
        << movie[i].director << "\t\t" 
        << movie[i].year << "\t" 
        << movie[i].rate << endl;
    }

    return 0;
}