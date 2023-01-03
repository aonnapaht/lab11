#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;
string textline;
float n=0;
float sum=0;
float u;
float sig;
float x=0;

int main(){
ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        x += pow(atof(textline.c_str()),2);
        n++;
    }
u = sum/n;
sig = sqrt(((1/n)*x) - pow(u,2));



    cout << "Number of data = " << n << '\n';
    cout << setprecision(3);
    cout << "Mean = " << u << '\n';
    cout << "Standard deviation = " << sig << '\n';
}