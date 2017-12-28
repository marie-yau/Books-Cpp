#include <cstdlib>

#include "sales.h"

using namespace SALES;

int main(int argc, char** argv) {
    double array[] = {3.1, 4.7, -2.9, 9.67};
    sales S1 = sales();
    sales S2 = sales(array);
    sales S3 = sales();
    S3.setSales(array);
    
    S1.showSales();
    S2.showSales();
    S3.showSales();

    return 0;
}

