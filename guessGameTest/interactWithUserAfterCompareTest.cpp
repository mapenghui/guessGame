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
    fin.open("resultPrint",ios::in);
    while(fin.good() && i < 1){
        getline(fin,temp[i]);
        total += temp[i];         // += 已被重载
        i++;
    }
    return total;
}

TEST(interactWithUserAfterCompare0) {
    interactWithUserAfterCompare(0);
    cout << "\n" << endl;
    string read = fileRead();  
    CHECK(read == "Congratulate!you guess it");
}

/*TEST(interactWithUserAfterCompare1) {
    interactWithUserAfterCompare(1);
    cout << "\n" << endl;
    string read = fileRead();  
    CHECK(read == "The number you input is smaller, please input again:");
}

TEST(interactWithUserAfterCompare2) {
    interactWithUserAfterCompare(2);
    cout << "\n" << endl;
    string read = fileRead();  
    CHECK(read == "The number you input is bigger, please input again:");
}*/

int main()
{   
    return UnitTest::RunAllTests();
}


