#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    // Corrected the file path with double backslashes
    std::string videoFolderPath = "C:\\Users\\ujubu\\Videos";

    try {
        for (const auto& entry : fs::directory_iterator(videoFolderPath)) {
            if (fs::is_regular_file(entry.path())) {
                fs::remove(entry.path());
                std::cout << "Deleted: " << entry.path() << std::endl;
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

