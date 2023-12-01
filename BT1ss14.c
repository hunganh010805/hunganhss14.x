#include<stdio.h>
int main(){
	int number;
	printf("Nhap so ban muon: ");
	scanf("%d",&number);
	int *pointer = &number;
	printf("Gia tri cua bien = %d\n",number);
	printf("Gia tri cua bien = %d\n",*pointer);
	printf("Dia chi bien duoc khai bao = %d\n",&number);
	printf("Dia chi bien duoc khai bao = %d\n",pointer);
}
