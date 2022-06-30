#include <stdlib.h>

int main() {
    int commands;

    commands += system("sudo apt-get update");
    commands += system("sudo apt install wget");
    commands += system("sudo apt-get install apt-transport-https");
    commands += system("wget -qO- https://dl-ssl.google.com/linux/linux_signing_key.pub | sudo gpg --dearmor -o /usr/share/keyrings/dart.gpg");
    commands += system("echo 'deb [signed-by=/usr/share/keyrings/dart.gpg arch=amd64] https://storage.googleapis.com/download.dartlang.org/linux/debian stable main' | sudo tee /etc/apt/sources.list.d/dart_stable.list");
    commands += system("sudo apt-get update");
    commands += system("sudo apt-get install dart");
    commands += system("echo \'export PATH=\"$PATH:/usr/lib/dart/bin\"\' >> ~/.profile");

    return commands;
}