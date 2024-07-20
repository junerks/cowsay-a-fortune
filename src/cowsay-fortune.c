#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    const char* animals[] = {"default", "sheep", "dragon", "ghostbusters", "stegosaurus", "vader"};
    int size = sizeof(animals) / sizeof(animals[0]);

    srand(time(0));
    int random = (rand() % size);

    const char* animal = animals[random];

    char command[50] = "fortune | cowsay -f ";
    strcat(command, animal);
    system(command);

    return 0;
}
