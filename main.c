#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfNotes;
    float scanner, sum, avg;

    printf("Number of notes: ");
    scanf("%d",&numberOfNotes);

    for(int cont=0;cont<numberOfNotes;cont++){
        printf("Note %d: ", cont+1);
        scanf("%f",&scanner);
        sum+=scanner;
    }


     avg = sum/numberOfNotes;

     if(avg>5){
        printf("\nYou were approved\n");
     }else{
        printf("\nYou were disapproved\n");
     }

     printf("Your final average is:\n ");
     printf("%.2f", avg);



}

