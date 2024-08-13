#include <string>
#include <algorithm>

// Function to concatenate two strings
std::string concatenateStrings(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

// Function to extract a substring
std::string extractSubstring(const std::string& str, size_t start, size_t end) {
    return str.substr(start, end - start);
}

// Function to convert a string to uppercase
std::string toUpperCase(const std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
