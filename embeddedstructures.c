#include <stdio.h>
struct Car {
    char colour[50];
    struct Engine {
        int engineNumber;
        float capacity;
    };
    struct Engine eng;
};
int main() {
    struct Car c;
    printf("Enter colour, engine number, capacity:\n");
    scanf("%s %d %f",c.colour,&c.eng.engineNumber,&c.eng.capacity);

    printf("\nCar Details:\n");
    printf("colour: %s\n", c.colour);
    printf("Engine No: %d\n", c.eng.engineNumber);
    printf("Capacity: %f\n", c.eng.capacity);
    return 0;
}
