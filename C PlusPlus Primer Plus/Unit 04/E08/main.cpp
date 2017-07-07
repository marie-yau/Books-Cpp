#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double heights[2] = {140.3, 180.1};
    int ages [2] = {10, 26};
    
    double * p_heights = heights;
    int * p_ages = &ages[0];
    
    cout << "height[0] = " << heights[0] << endl;
    cout << "height[1] = " << *(p_heights + 1) << endl;

    return 0;
}

 
