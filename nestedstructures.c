#include <stdio.h>
struct Engine {
    int engineNumber;
    float capacity;
};
struct Car {
    char colour[50];
    struct Engine eng;
};
int main() {
    struct Car c;
    printf("Enter colour, engine number, capacity:\n");
    scanf("%s %d %d %f",c.colour,&c.eng.engineNumber,&c.eng.capacity);
    printf("\nCar Details:\n");
    printf("Colour: %s\n", c.colour);
    printf("Engine No: %d\n", c.eng.engineNumber);
    printf("Capacity: %.1f\n", c.eng.capacity);
    return 0;
}
