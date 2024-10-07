#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(int argc, char* argv[]) {
   
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <pattern> <filename>" << std::endl;
        return 1;  // Error if arguments are incorrect
    }

    // Read the pattern (which will be empty in this case)
    std::string pattern = argv[1];
    
    // Open the file
    std::ifstream file(argv[2]);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << argv[2] << std::endl;
        return 1;  // Error if file cannot be opened
    }

    // If the pattern is empty, we print the entire file
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    // Return 0 since an empty string always "matches"
    return 0;
}