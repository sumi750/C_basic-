#include<stdio.h>
void america ()
{
    printf("you r in america\n");
    return;
}



void india ()
{
    printf("you r in india\n");
    america ();
    return;


}

int main ()
{ 
    india();
    return 0;

}