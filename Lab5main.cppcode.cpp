#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct BusinessCard {
    string companyName;
    string companyAddress;
    string phoneNumber;
    string workingHours;
    string representativePOC;
    int priceQuoted;
};

int main() {
    srand(time(0));

    BusinessCard companies[5] = {
        {"CheapTec", "123 Plaeground Stret", "012-345-6789", "10AM-8PM", "Lui", rand() % 500 + 100},
        {"TechnoDisco", "7th Street", "777-777-1234", "8AM-5PM", "Whitney", rand() % 500 + 100},
        {"DialGrub", "Triton Ave", "456-789-0123", "10AM-7PM", "Steve", rand() % 500 + 100},
        {"NeedaHand", "Unicorn Way", "159-357-8888", "24/7", "Cyro", rand() % 500 + 100},
        {"WakeyWakey", "Fire Ave", "555-8790", "9AM-5PM", "Azula", rand() % 500 + 100}
    };

    int bestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (companies[i].priceQuoted < companies[bestIndex].priceQuoted) {
            bestIndex = i;
        }
    }

    cout << "Best company: " << companies[bestIndex].companyName << endl;
    cout << "Price: $" << companies[bestIndex].priceQuoted << endl;

    return 0;
}
