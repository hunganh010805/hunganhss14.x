#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//CASE 1:
int insert(int *pointer, int n, int *number){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", *number);
		scanf("%d", (pointer + *number));
		(*number)++;
    }
}
//CASE 2:
int print(int *pointer, int n){;
	printf("Gia tri dang quan ly trong mang la:\n");
		for(int i = 0; i < n; i++){
			printf("%d\t", *(pointer + i));
	}
}
//CASE 3:
int copy(int *ptr1, int *ptr2, int n){
	for(int i = 0; i < n; i++){
		*(ptr2 + i) = *(ptr1 + i);
		printf("arrCopy[%d] = %d\n", i, *(ptr2 + i));
	}
}
//CASE 4:
int swapArr(int *ptr1, int *ptr2, int n){
	for(int i = 0; i < n; i++){
		int temp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = temp;
	}
	printf("Hai mang sau khi duoc doi gia tri cho nhau:\n");
	for(int i = 0; i < n; i++){
		printf("newArr[%d] = %d\n", i, *(ptr2 + i));
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i, *(ptr1 + i));
	}
}
//CASE 5:
int reverse(int *ptr, int n){
	printf("Mang sau khi duoc dao nguoc la:\n");
	for(int i = n - 1; i>=0; i--){
		printf("arr[%d] = %d\n",i ,*(ptr + i));
	}
}
//CASE 6:
int findKey(int *ptr, int n, int key){
	for(int i = 0; i < n; i++){
		if(*(ptr + i) == key){
			printf("Ky tu %d can tim tai arr[%d].", key, i);			
		}
		return 0;		
	}
	printf("Ky tu %d can tim khong co trong mang\n", key);
}

void printMenu(){
    printf("***************MENU**************\n");
    printf("1. Nhap vao mang.\n");
    printf("2. In ra mang.\n");
    printf("3. Sao chep mang vao mang khac.\n");
    printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau.\n");
    printf("5. Dao nguoc mang.\n");
    printf("6. Nhap vao 1 ki tu tim kiem ki tu trong mang.\n");
    printf("7. Thoat.\n");
}

int main(){
	int arr[100];
	int arrCopy[100];
	int newArr[100];
	int currentIndex;
	int key;
	int size;
    int choice;
    do{
        printMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            	printf("Nhap nhap gia tri phan tu co trong mang: ");
				scanf("%d",&size);
				insert(arr, size, &currentIndex);
				printf("\n");
            break;
            case 2:
            	print(arr, currentIndex);
            	printf("\n");
            break;
            case 3:
            	copy(arr, arrCopy, currentIndex);
            	printf("\n");	
            break;
            case 4:
            	printf("Nhap vao mot mang moi:\n");
				for(int i = 0; i < currentIndex; i++){
					printf("newArr[%d] = ", i);
					scanf("%d", &newArr[i]);
				}
				swapArr(arr, newArr, currentIndex);
                printf("\n");
            break;
            case 5:
            	reverse(arr, currentIndex);
            	printf("\n");	
            break;
            case 6:
            	printf("Nhap ky tu can tim kiem: ");
				scanf("%d", &key);
				findKey(arr, currentIndex, key);
            	printf("\n");	
            break;
            case 7:
                exit(0);
                break;
            default:
                printf("Vui long chon tu 1 -> 7.\n");
        }
    } while (choice != 7);
    return 0;
}
