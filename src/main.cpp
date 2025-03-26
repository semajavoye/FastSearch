#include <iostream>
#include <string_view>
#include "version.h"

namespace fastsearch {

constexpr std::string_view HelpMessage =
    "Welcome to FastSearch! Looks like you need help!\n"
    "Usage: fastsearch [options] [search term]\n"
    "Options:\n"
    "  -h, --help    Show this help message\n"
    "  -v, --version Show the version of FastSearch\n";

constexpr std::string_view UsageMessage =
    "Welcome to FastSearch! Please provide a search term.\n"
    "Usage: fastsearch [options] [search term]\n"
    "Use fastsearch -h for help.\n";

void PrintVersion() {
    std::cout << "FastSearch version " << FASTSEARCH_VERSION << std::endl;
}

void PrintHelp() {
    std::cout << HelpMessage;
}

void PrintUsage() {
    std::cout << UsageMessage;
}

void ProcessArguments(int argc, char* argv[]) {
    if (argc <= 1) {
        PrintUsage();
        return;
    }

    for (int i = 1; i < argc; ++i) {
        std::string_view arg = argv[i];

        if (arg == "-h" || arg == "--help") {
            PrintHelp();
            return;
        }
        
        if (arg == "-v" || arg == "--version") {
            PrintVersion();
            return;
        }
    }
}

}  // namespace fastsearch

int main(int argc, char* argv[]) {
    fastsearch::ProcessArguments(argc, argv);
    return 0;
}