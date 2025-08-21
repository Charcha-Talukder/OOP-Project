#pragma once
#include <map>
#include <string>
#include <iostream>

class Budget {
    double income = 0, spent = 0;
    std::map<std::string,double> cat;
public:
    void addIncome(double v) { income += v; }
    void addExpense(std::string c, double v) { spent += v; cat[c]+=v; }
    void report() {
        std::cout<<"Income:"<<income<<"\nSpent:"<<spent<<"\nRemaining: " << income - spent << "\n";
        for(auto &p:cat)std::cout<<p.first <<":"<<p.second <<"\n";
    }
};
