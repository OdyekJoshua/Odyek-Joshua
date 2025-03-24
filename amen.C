#include <stdio.h>

int main(){
    int AccountBalance = 50000 ;
    int withdrawalAmount = 30000;
    int deduction = AccountBalance - withdrawalAmount ;
    //perform deduction result = AccountBalance-WithdrwalAmount;
    //print result
    printf("AccountBalance:%d shillings\n",AccountBalance);
    printf("deduction:%d shillings\n",deduction);
    printf("Remaining Amount:%d shillings\n",deduction);


    return 0;
}
