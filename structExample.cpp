#include <cstdio>  // C standard I/O library for printf


struct Animal {
    char species[50];
    char sound[50];
    int legs;
};

int main() {
    // Create an Animal structure and store it in myAnimal1;
    Animal myAnimal1 = {"Lion", "Roar", 4};

    // Create another Animal structure and store it in myAnimal2;
    Animal myAnimal2 = {"Elephant", "Trumpet", 4};

    // Print the structure members using C library printf
    printf("%s says %s and has %d legs\n", myAnimal1.species,
           myAnimal1.sound, myAnimal1.legs);
  
    printf("%s says %s and has %d legs\n", myAnimal2.species,
           myAnimal2.sound, myAnimal2.legs);

    return 0;
}
