#include <iostream>
#include "version.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    // Get the passed arguments from the command line
    if (argc > 1) 
    {
        for (int i = 1; i < argc; i++) 
        {
            if (string(argv[i]) == "-h" || string(argv[i]) == "--help") 
            {
                cout << "Welcome to FastSearch! Looks like you need help!" << std::endl;
                cout << "Usage: fastsearch [options] [search term]" << std::endl;
                cout << "Options:" << std::endl;
                cout << "  -h, --help: Show this help message" << std::endl;
                cout << "  -v, --version: Show the version of FastSearch" << std::endl;

                return 0;
            } 
            else if (string(argv[i]) == "-v" || string(argv[i]) == "--version") 
            {
                cout << "FastSearch version " << FASTSEARCH_VERSION << endl;
                return 0;
            }
        }
    } else {
        cout << "Welcome to FastSearch! Please provide a search term." << std::endl;
        cout << "Usage: fastsearch [options] [search term]" << std::endl;
        cout << "Use fastsearch -h for help." << std::endl;
    }

    return 0;
}