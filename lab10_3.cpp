#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    ifstream source;
	source.open("score.txt");
    string textline;
    int i = 0;
    float sum = 0;
    float powsum = 0;
    while(getline(source,textline)){
        sum += stof(textline);
        i++;
    }
    /*cout << "Number of data = "  << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << (1.0/(i + 1)) * sum << endl;
    cout << "Standard deviation = " << sqrt(((1.0/(i + 1))) * sum - ((1.0/(i + 1)) * sum));*/
    cout << i;
}