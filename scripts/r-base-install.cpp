#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt update");
    commands += system("sudo apt install software-properties-common dirmngr");
    commands += system("wget -qO- https://cloud.r-project.org/bin/linux/ubuntu/marutter_pubkey.asc | sudo tee -a /etc/apt/trusted.gpg.d/cran_ubuntu_key.asc");
    commands += system("sudo add-apt-repository \"deb https://cloud.r-project.org/bin/linux/ubuntu $(lsb_release -cs)-cran40/\"");
    commands += system("sudo apt update");
    commands += system("sudo apt install r-base");

    return commands;
}