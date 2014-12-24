#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account{
public:
    static double rate(){return interestRate;}
    static void rate(double);
private:
    static double interestRate;
    static constexpr int period = 30;
    double daily_tbl[period];
};
#endif
