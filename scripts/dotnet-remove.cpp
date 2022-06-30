#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt remove dotnet-sdk-6.0");

    return commands;
}