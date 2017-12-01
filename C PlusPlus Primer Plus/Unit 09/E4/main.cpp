#include <cstdlib>
#include "sales.h"
//#include "sales.cpp"

using namespace SALES;

int main(int argc, char** argv) {
    double array[4] = {5, 3.2, 2, 8};
    Sales groceryStore;
    setSales(groceryStore, array, 4);
    showSales(groceryStore);
    
    Sales departmentStore;
    setSales(departmentStore);
    showSales(departmentStore);

    return 0;
}
