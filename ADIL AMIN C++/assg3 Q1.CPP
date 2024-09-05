#include <iostream>
#include <string>
using namespace std;

class Part {
public:
    int Part_Id;
    string Part_Name;
    double Part_Price;

    Part(int id, const string& name, double price) : Part_Id(id), Part_Name(name), Part_Price(price) {}

    Part(const Part& other) : Part_Id(other.Part_Id), Part_Name(other.Part_Name), Part_Price(other.Part_Price) {}
};

int main() {
    Part part1(1, "Widget", 10.99);
    Part part2 = part1;

    cout << "Part 1: ID=" << part1.Part_Id << ", Name=" << part1.Part_Name << ", Price=" << part1.Part_Price << std::endl;
    cout << "Part 2: ID=" << part2.Part_Id << ", Name=" << part2.Part_Name << ", Price=" << part2.Part_Price << std::endl;

    return 0;
}
