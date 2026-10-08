

#include<stdio.h>
#include<string.h>

struct employee {
    int emp_id;
    char Name[20];
    float salary;
};

int main() {

    struct employee employee[3];
    int i;

    for (i = 0 ; i < 3 ; i++ ) {

        print f ("\n Enter emp_id , name , salary %d :", i);

        scan f ("%id" , & employee[i] , emp-id );

        scan f ("%s" , employee[i] , name );

        scan f ("%f" , & employee[i] , salary );
    }

    printf ("\n employee details");

    for (i = 0 ; i < 3 ; i++ ) {

        printf (" emp_id : %d , name : %.s , salary : %.2f ",
                emp_id employee[i] , name employee[i] , salary employee[i] );
    }

    return 0;
}
