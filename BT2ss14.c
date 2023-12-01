#include <stdio.h>
int main(){
    int n, m;
    printf("Nhap vao hai gia tri so nguyen: ");
    scanf("%d%d", &n, &m);
    int differenceA = n - m;
    printf("Hieu truoc khi doi %d - %d = %d\n", n, m, differenceA);
    int *ptrA, *ptrB;
    ptrA = &n;
    ptrB = &m;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    int differenceB = *ptrA - *ptrB;
    printf("Hieu sau khi doi %d - %d = %d\n", n, m, differenceB);
    return 0;
}
