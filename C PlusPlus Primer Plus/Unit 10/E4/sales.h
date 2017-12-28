#ifndef SALES_H
#define SALES_H

namespace SALES{
    class sales {
    public:
        sales();
        sales(double s[]);
        void setSales(double s[]);
        void showSales();
    private:
        static const int QUARTERS = 4;
        double sale[QUARTERS];
        double max;
        double min;
    };
}
#endif /* SALES_H */

