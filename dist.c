#include<stdio.h>

void main(){
	struct length_struct{
    		float length;
};
    struct length_struct dist1;
    struct length_struct dist2;

    printf("Enter distance between first 2 points : ");
    scanf("%f", &dist1.length);

    printf("Enter distance between next 2 points : ");
    scanf("%f", &dist2.length);

    printf("Sum = %f", dist1.length+dist2.length);
}
// NOT SURE IF THIS IS WHAT IS ASKED//
