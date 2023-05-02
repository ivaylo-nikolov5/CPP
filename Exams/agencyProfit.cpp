#include <iostream>
#include <iomanip>

int main() {
    std::string companyName;
    int adultTickets;
    int childTickets;
    double adultTicketPrice;
    double servicePrice;

    std::cin >> companyName;
    std::cin >> adultTickets;
    std::cin >> childTickets;
    std::cin >> adultTicketPrice;
    std::cin >> servicePrice;

    double childTicketPrice = adultTicketPrice * 0.3;
    adultTicketPrice += servicePrice;
    childTicketPrice += servicePrice;

    double totalPrice = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
    double profit = 0.2 * totalPrice;

    std::cout << "The profit of your agency from " << companyName 
    << " tickets is " << std::fixed << std::setprecision(2) << profit << " lv.";

    return 0;
}