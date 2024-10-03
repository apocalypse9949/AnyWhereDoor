#include <iostream>
#include <cstdlib>
: ' 
baseline code reference credit ---->  Patrik Holop in py
int main() {
    // Check if Python3 is installed
    if (system("python3 --version") != 0) {
        std::cerr << "Python3 is not installed. Please install Python3." << std::endl;
        return 1;
    }

    // Check if virtualenv is installed
    if (system("pip3 show virtualenv > /dev/null 2>&1") != 0) {
        std::cout << "virtualenv is not installed. Installing virtualenv..." << std::endl;
        if (system("pip3 install virtualenv") != 0) {
            std::cerr << "Failed to install virtualenv." << std::endl;
            return 1;
        }
    }

    // Check if the virtual environment folder exists
    if (system("[ -d venv ]") == 0) {
        std::cout << "Virtual environment already exists." << std::endl;
    } else {
        // Create the virtual environment
        std::cout << "Creating virtual environment..." << std::endl;
        if (system("python3 -m venv venv") != 0) {
            std::cerr << "Failed to create virtual environment." << std::endl;
            return 1;
        }
        std::cout << "Virtual environment created successfully." << std::endl;
    }

    // Activate the virtual environment
    std::cout << "Activating the virtual environment..." << std::endl;
    if (system("source venv/bin/activate") != 0) {
        std::cerr << "Failed to activate virtual environment." << std::endl;
        return 1;
    }

    // Install dependencies from requirements.txt if the file exists
    if (system("[ -f requirements.txt ]") == 0) {
        std::cout << "Installing dependencies from requirements.txt..." << std::endl;
        if (system("pip install -r requirements.txt") != 0) {
            std::cerr << "Failed to install dependencies." << std::endl;
            return 1;
        }
    } else {
        std::cout << "No requirements.txt file found." << std::endl;
    }

    std::cout << "Virtual environment is ready. To deactivate, run 'deactivate' in the shell." << std::endl;

    return 0;
}
