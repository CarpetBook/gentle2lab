#include <fstream>
#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

void printhelp() {
    cout << "gentle2lab build 01 (9-23-2022)" << endl << endl;
    cout << "Usage: gentle2lab <file>" << endl;
}

int main(int argc, char *argv[]) {
    ifstream alignfile("align.json");
    json j = json::parse(alignfile);

    printhelp();
    return 0;
}
