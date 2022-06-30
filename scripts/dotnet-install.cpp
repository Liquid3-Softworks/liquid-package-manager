#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt install wget");
    commands += system("sudo apt install dpkg");
    commands += system("wget https://packages.microsoft.com/config/ubuntu/22.04/packages-microsoft-prod.deb -O packages-microsoft-prod.deb");
    commands += system("sudo dpkg -i packages-microsoft-prod.deb");
    commands += system("rm packages-microsoft-prod.deb");
    commands += system("sudo apt-get update; \ sudo apt-get install -y apt-transport-https && \ sudo apt-get update && \ sudo apt-get install -y dotnet-sdk-6.0");

    return commands;
}