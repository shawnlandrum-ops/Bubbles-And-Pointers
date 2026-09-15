#include <stdio.h>

const int MAX=9;

void printValues(int array[]){
    for(int i=0;i<MAX;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void swap(int* num1, int* num2){
    int filler=*num1;
    *num1=*num2;
    *num2=filler;
    printf("x: %d, y: %d \n", *num1, *num2);
}

void sort(int* values){
    for(int i=0;i<MAX-1;i++){
        for(int j=0;j<MAX-1;j++){
            int x = values[j];
            int y = values[j+1];
                
            
            printf("x: %d, y: %d \n", x, y);

            if(x>y){
                printf("swapping \n");
                swap(&x, &y);
                values[j]=x;
                values[j+1]=y;
            }
        }
        
            
            
    }
}



int main(){
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
    printf("Before: \n");
    printValues(values);
    

  // test swap

    
    

    sort(values);
    printf("After: \n");
    printValues(values);

    return(0);
} // end main
