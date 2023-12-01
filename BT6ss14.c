#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int size = 100;
	char str[size];
	char str0[size]; 
	char str1[size];
	char str2[size];
	char sourceArray[size];
	char *ptr1, *ptr2;
	int compare; 
	int choice;
	do{
		printf("**************MENU****************\n");
		printf("1. Nhap vao chuoi.\n");
		printf("2. In ra chuoi.\n");
		printf("3. Sao chep chuoi vao mot chuoi khoac.\n");
		printf("4. Nhap vao chuoi khac, tien hanh them chuoi do vao chuoi ban ðau.\n");
		printf("5. Nhap vao chuoi khac, so sanh chuoi ðo voi chuoi ban ðau.\n");
		printf("6. In ra chuoi dao nguoc.\n");
		printf("7. Thoat.\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao chuoi ma ban mong muon: ");
				scanf("%s", str);
			break; 
			case 2:
				printf("Noi dung chuoi vua nhap vao: %s\n",str);
			break; 
			case 3:
				ptr1 = str;
				ptr2 = str0;
				for (int i = 0; i < size; i++) {
                    *(ptr2 + i) = *(ptr1 + i);
                }
                printf("Chuoi sau khi sao chep tu chuoi ban dau: %s",str0);
                
			break; 
			case 4:
			    printf("Nhap vao chuoi moi mong muon: ");
                scanf("%s", str1);
                strcat(str, str1);
                printf("Chuoi sau khi da them: %s\n", str);
			    printf("\n");
			break; 
			case 5:
				ptr1 = str;
				int len1 = 0; 
			    while(*ptr1 != '\0'){
			    	len1++;
			        ptr1++;
			    }
				printf("Nhap vao chuoi moi mong muon: ");
				scanf("%s",str2); 
				ptr2 = str2;
				int len2 = 0;
			    while(*ptr2 != '\0'){
			    	len2++;
			        ptr2++;
			    }				
				if(len1 == len2){
					printf("Hai chuoi bang nhau."); 
				}else if (len1 > len2){
					printf("Chuoi thu nhat dai hon chuoi hai.");
				}else{
					printf("Chuoi thu hai dai hon chuoi thu nhat.");
				} 
				printf("\n");
			break; 
			case 6:
				size = strlen(str);
				printf("Chuoi sau khi dao nguoc: ");
				for(int i=strlen(str); i>=0; i--){
				    printf("%c",str[i]);
			    }
			    printf("\n");
			break; 
			case 7:
				exit(0);
			break; 
			default:
				printf("Vui long chon tu 1 -> 7.");
		} 
	}while(choice !=7);
	return 0;
}
