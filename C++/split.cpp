#include <iostream>
#include <sstream>
#include <string>
#include <vector>
// C++µÄsplitº¯Êý
void split(const std::string& s,
    std::vector<std::string>& sv,
                   const char delim = ' ') {
    sv.clear();
    std::istringstream iss(s);
    std::string temp;

    while (std::getline(iss, temp, delim)) {
        sv.emplace_back(std::move(temp));
    }

    return;
}

int main() {
    std::string s("abc:def:ghi");
    std::vector<std::string> sv;

    split(s, sv, ':');

    for (const auto& splitS : sv) {
        std::cout << splitS << std::endl;
    }

    return 0;
}
