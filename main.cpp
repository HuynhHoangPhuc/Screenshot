#include <string>

#ifdef _WIN32
#include <windows.h>
#include "unistd.h"

void capture(std::string filename) {
    std::string command = "call screenCapture " + filename + ".jpg";
    system(command.c_str());
}

void capture2(std::string filename) {
    std::string command = "screencapture -x " + filename + ".jpg";
    system(command.c_str());
}
#else

#include <unistd.h>

void capture(std::string filename) {
    std::string command = "screencapture -x " + filename + ".jpg";
    system(command.c_str());
}

#endif

int main() {
    capture("image2");
    return 0;
}
