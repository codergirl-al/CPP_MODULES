#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for system()

bool compareFiles(const std::string& p1, const std::string& p2) {
    std::ifstream f1(p1, std::ifstream::binary|std::ifstream::ate);
    std::ifstream f2(p2, std::ifstream::binary|std::ifstream::ate);

    if (f1.fail() || f2.fail()) {
        return false;
    }

    if (f1.tellg() != f2.tellg()) {
        return false;
    }

    f1.seekg(0, std::ifstream::beg);
    f2.seekg(0, std::ifstream::beg);
    return std::equal(std::istreambuf_iterator<char>(f1.rdbuf()),
                      std::istreambuf_iterator<char>(),
                      std::istreambuf_iterator<char>(f2.rdbuf()));
}

bool testReplacement(const std::string& input, 
                     const std::string& s1, 
                     const std::string& s2, 
                     const std::string& expectedOutput) 
{
    std::system(("./replaceAndSave " + input + " " + s1 + " " + s2).c_str());

    bool isSame = compareFiles(input + ".replace", expectedOutput);
    if (!isSame) {
        std::cerr << "Test failed for: " << input << " " << s1 << " " << s2 << "\n";
        std::cerr << "See: " << input + ".replace" << "\n";
        std::cerr << "Expected: " << expectedOutput << "\n";
    }
    return isSame;
}

int main() {
    bool allTestsPassed = true;

    // Test 1: Basic Replacement
    if (!testReplacement("test1_input.txt", "World", "Planet", "test1_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 2: No Replacement (s1 not in file)
    if (!testReplacement("test2_input.txt", "Nonexistent", "Replacement", "test2_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 3: s1 is a subset of s2
    if (!testReplacement("test3_input.txt", "Cat", "Catastrophe", "test3_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 4: s1 is longer than s2
    if (!testReplacement("test4_input.txt", "Dinosaur", "Dog", "test4_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 5: s1 is a special character
    if (!testReplacement("test5_input.txt", "$", "Dollar", "test5_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 6: s1 and s2 are numbers
    if (!testReplacement("test6_input.txt", "123", "OneTwoThree", "test6_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 7: s1 and s2 are empty strings
    if (!testReplacement("test7_input.txt", "", "", "test7_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Test 8: s1 is space character
    if (!testReplacement("test8_input.txt", " ", "SPACE", "test8_expected_output.txt")) {
        allTestsPassed = false;
    }

    // Add more tests as needed...

    if (allTestsPassed) {
        std::cout << "All tests passed!\n";
    } else {
        std::cerr << "Some tests failed!\n";
    }

    return 0;
}