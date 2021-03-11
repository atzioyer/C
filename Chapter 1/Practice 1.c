#include <stdio.h> /*standard input and output*/

int main (int argc, char**args) {
int x,y,z; /*integers*/

x=3; /*define initial values*/
y=7;

z=x; /*swap values*/
x=y;
y=z;

if (x > y) {
    printf("hello\n");
}

while (x > 0) {  /* (loop) cycle */
    printf("while: %i\n", 2 * x); /*print an integer*/
    x--; /*lower by one*/
}

x=z;
do{
    printf("do-while: %i\n", 2* x);
    x--;
} while (x > 0);


for (x = 1; x <= 5; x += 2){
    printf("y - x = %i now and x = %i\n", y - x, x);  /*regular content*/
}

return 1;

}
