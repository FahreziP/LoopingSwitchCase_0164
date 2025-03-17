#include <iostream>
using namespace std;

double hitungIpk(int sks, double total)
{
    return total / sks;
}

string predikat (double ipk){
    if (ipk < 10){
        return "Memuaskan";
    }
    else{
        return "Cumlaude";
    }
}

int main (){

}