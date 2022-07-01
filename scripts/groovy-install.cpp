#include <stdlib.h>

int main() {
    int commands;

    commands += system("sudo apt-get update");
    commands += system("sudo apt-get install groovy");

    return commands;
}