#include <iostream>
#include <fstream>
#include <time.h>
#include <math.h>
using namespace std;

int main() {
    srand(time(NULL));       // No need for better init.
    string file = "Harmonics1.txt";
    float data = 1.0;
    ofstream outfile(file.c_str(), ios_base::app);
    if(!outfile) {
        cerr << "Impossible to write in " << file << "!" << endl;
        return -1;
        }
    else {
        outfile << data << endl;
        int nbHarmonics = rand() % 10 + 3; // ints tous inclus.
        bool regular = false;
        int reg = rand() % 10 + 1;
        if(rand() % 3 < 1);
            {
            regular = true;
            cout << "reg" << endl; // Tests;
            }
        for(int a = 1; a < nbHarmonics + 1; a++) {
            if(regular) {
                data = 1.0 / (float(reg) * float(a));
                }
            else {
                data = float((100 * rand()) % int(100 * data)) / float(100.0);
                }
            outfile << data << endl;
            }
        outfile.close();
        }
    cout << "Ok!" << endl;
    return 0;
    }
