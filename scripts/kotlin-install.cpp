#include <stdlib.h>

int main() {
    int commands;

    commands = system("lpm-install-jdk");
    commands += system("sudo snap install --classic kotlin");

    return commands;
}