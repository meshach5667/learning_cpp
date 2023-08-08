#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;



int main(){
const short maxValue = 6;
const short minValue = 1;
srand(time(0));
cout << (rand()%(maxValue - minValue + 1)) + minValue;

    return 0;
} 