#include<stdio.h>
int main(){
  struct citizen /* <-- Our custom datatype*/{
    char* name;
    int age ;
    char* city;
              };
 // struct citizen {char* name; int age; char* city;} rahul /* <-- Declaration of variable */;
  struct citizen rahul={"Rahul Rao",25,"Unnao"}; /* <-- Declaration of variable*/
 /* struct citizen {
    char* name;
    int age;
    char* city;
    } rahul; /* <-- Declaration of variable*/ 
    printf("%s\n",rahul.name);
    rahul.age=27;
    printf("%d\n",rahul.age);
    printf("%ld\n",sizeof(struct citizen));
    printf("%ld\n",sizeof(rahul));
    return 0;
  }
