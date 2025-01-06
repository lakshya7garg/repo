#include <stdio.h>
//program to print power set of a given array
void printPowerSet(int arr[], int n) {
    int pos=0,data,i;
    for (int i=0 ; i< pow(2,n) ; i++) {
        int pos=0;
        data=i;
        printf("{ ");
        while(data!=0){
            if(data&1==1){
                printf("%d ",arr[pos]);
            }
            pos++;
            data>>=1;
        }
        printf("}\n");
    }
}

int main() {
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Power Set:\n");
    printPowerSet(a,n);

    return 0;
}

