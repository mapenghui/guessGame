#include <unittest++/UnitTest++.h>
#include <iostream>
#include <string>
#include <fstream>
#include "guessGame.h"

string fileRead() {
    ifstream fin;
    string temp[20], total = "";   
    char filename[7];
    int i = 0;
    fin.open("screen",ios::in);
    while(fin.good() && i < 1){
        getline(fin,temp[i]);
        total += temp[i]; // += 已被重载
        cout << temp[i] << endl;
        i++;
    }
    return total;
}

TEST(interactWithUserTest) {
    string read = fileRead();
    CHECK( read == "Please an integer number between 0 and 19:");
}

int main()
{
    interactWithUser();
    cout << "\n" << endl;
    return UnitTest::RunAllTests();
}

