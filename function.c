#include<stdio.h>
#include<stdlib.h>

int *ptr; int n;
void Nhapmang(int n) {
	ptr = (int*)malloc(n*sizeof(int));
	int  i;
	for (i=0; i<n;i++) {
		printf("a[%d]", i);
		scanf("%d", &ptr[i]);
	}
}
void TimMax(int a[], int n) {
	int i;
	int max = ptr[0];
	for (i=1; i<n; i++) 
		if (max < ptr[i]) 
		max = ptr[i];
	printf("%d la so lon nhat", max);
	
	}
void TimMin(int ptr[], int n) {
	int i;
	int min = ptr[0];
	for (i=1; i<n; i++) 
		if (min > ptr[i]) 
		min = ptr[i];
	printf("%d la so nho nhat", min);
	
}
void Sapxeptangdan(int a[], int n) {
	int i,j, temp;
	for (i=0; i < n; i++) {
		for (j=0; j< n-i-1;j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nSap xep theo chieu tang dan : ");
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
}
void Sapxepgiamdan(int a[], int n) {
	int i,j, temp;
	for (i=0; i < n; i++) {
		for (j=0; j< n-i-1;j++) {
			if (a[j] < a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	printf("\nSap xep theo chieu giam dan : ");
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}
}
void menu() {
    int ch;
    while(1){
        printf("\n Menu  ");
        printf("\n1. Nhapmang");
        printf("\n2. TimMax");
        printf("\n3. TimMin");
        printf("\n4. Sapxeptangdan");
        printf("\n5. Sapxepgiamdan");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("\n %d",&ch);
       
        switch(ch){
            case 1: printf("so luong phan tu:" );
            scanf("%d ", &n);
			Nhapmang(n);
                break;
            case 2: TimMax(ptr, n);
                break;
            case 3: TimMin(ptr ,n);
                break;
            case 4: Sapxeptangdan(ptr, n);
                break;
            case 5: Sapxepgiamdan(ptr, n);
                break;
            case 6:
                exit(0);
        }
    }
   
}

    



   int main() {
   	
   menu();
    return 0;
}


