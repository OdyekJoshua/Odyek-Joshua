#include <stdio.h>

int main() {
    int num;

    //Prompt user to Enter a number
    printf("Enter a integer:");
    scanf("%d" , &num);

    //check if the nunumber is even or odd number
    if (num %2==0){ 
        goto even; //Redirect to the 'even' label}
    } else { 
            goto odd; //Redirect to the 'odd' label
    }
    even:
        printf("%d is an even number.\n",num);
        goto end; // skip the rest of the program
    odd: 
        printf("%d is an odd number.\n",num);

    end:
    printf("program ends here.\n");
    
return 0;
}