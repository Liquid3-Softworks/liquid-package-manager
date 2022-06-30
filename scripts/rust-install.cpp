#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt update");
    commands += system("sudo apt install curl");
    commands += system("curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh");
    commands += system("source $HOME/.cargo/env");

    return commands;
}