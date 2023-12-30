#include<stdio.h>
#include<stdbool.h>
#include<string.h>
enum ExampleEnum {
    VALUE_1,
    VALUE_2,
    VALUE_3,
	VALUE_4
};

int search(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			return i;
		}
	}
	return -1;
}

/*
typedef struct{
	char name[30];
	int ID;
	int score;
} Student; 

void nhap(Student  Student[3]){
	for (int i=0; i<3;i++){
		printf("Nhap ten: ");
		scanf("%s", &Student[i].name);

		printf("Nhap ID: ");
		scanf("%d", &Student[i].ID);

		printf("Nhap diem: ");
		scanf("%d", &Student[i].score);
	}
}

void xuat(Student  Student[3]){
	for (int i=0; i<3;i++){
		printf("%s\n", Student[i].name);
		printf("%d\n", Student[i].ID);	
		printf("%d\n", Student[i].score);
	}
}
int ham(int a){
a = 20;
printf("%d\n",&a);
return a;
}
int main(){
	int a ;
	ham(a);
	printf("%d\n", a);
	printf("%d\n", &a);
	//Student Student[3];
	//nhap(Student);
	//xuat(Student);
	return 0;
}
*/
typedef struct  {
    	int b;
		char a;
    	char c;
}MyStruct;

struct Student{
	char name[30];
	int ID;
	int score;
	MyStruct *pMystruct;
};
// typedef struct		
// {		
// 	char m_1;	
// 	char m_2;	
// 	long m_3;	
// 	short m_4;	
// 	char m_5;	
// 	int m_6;	
// } st_A_Type;		


// int fa(void){
// 	static int c = 0;
// 	return c;
// }
// //change value in string
// int Str_change(char arr[]){
// 	for (int i=0; i<10; i++){
// 		arr[i]= '0';
// 	}
// 	return 0;
// }

// void fu(int *c){
// 	*c+=2;
// }
// void Allocate(int *p, int n)
// {
// *p = (int *)malloc(n * sizeof(int));
// }
// //extern int sum(void);
int a[100001];
int b[100001];
int BinSearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}
		else{
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}

void printArray(int a[], int n, int l, int r){
	for (int i = l; i <= r; i++){
		printf("%d\t", a[i]);
	}
}

bool solve(int a[], int b[], int n, int s){
	b[0]=a[0];
	for(int i=1; i<n;i++){
		b[i] = b[i-1]+ a[i];
	}
	for (int i = 0; i < n; i++){
		if (b[i] == s){
			printArray(a, n, 0, i);
			return true;
		}
		if(b[i]>s){
			int l = BinSearch( a, n, b[i]-s);
			if(l!=-1){
			printArray(a, n, l+1, i);
			return true;
			}
			else
			return false;
		}
	}
}
int main(){
	//unsigned short int a = -327 ;
	//printf("%d",a);
	//printf("%d",sum);
	/*
	char arr[10]="123456789";
	char arr1[10] = "012345678";
    printf("c: %d", fa());
	Str_change(arr);
	*/
	/*
	int ch = 10;
	const int a = 10;
	
	switch (fa()){
		case 10:
			printf(" equal 10\n");
			break;
		case 2:
			break;
		default:
			break;
	}
	
	//printf("%d",sizeof(void));
	;
	int d = 20;
	int e = 22;
	int b =10;
	int c = 12;
	const int* ptr;
	ptr = &c;  
	c++;
	int* const var = &b;
	(*var)++;
	const int* const x
	int** const y
	int *a;
	y = &a;
	y =  &b;
	//p = &e;
	//e++;
	//printf("%x\n",ptr);
	//printf("%d\n",*ptr);
	//printf("%d",++*ptr);
	//printf("%d\n",*var);
	//printf("%x\n",var);
	//printf("%x",&b);
	printf("%d\n",*p);
	printf("%x\n",p);
	printf("%x\n",&d);
	printf("%x",&e);
	*/
//int i = 5;
//int* pi = &i;
//printf("%d", *pi+++(*pi)++);

/*
struct Student s1;
struct Student *pStudent = &s1;
MyStruct s2;
s1.pMystruct = &s2;
s2.b =10;
s1.ID = 123;
s1.score = 10;
printf("%d",pStudent->pMystruct->b);
*/
//printf("%d\n", pStudent->ID);
//printf("%x", &pStudent->ID);
//printf("Size of MyStruct: %zu bytes\n", sizeof(struct Student));
//printf("%x\n",&s1.name);
//printf("%x\n",&s1.ID);
//printf("%x\n",&s1.score);
//printf("%d", a);
/*
	for (int i=0; i<10; i++){
	printf("%c\n", arr[i]);
	}
	*/
/*
	unsigned  int a = 1;
	unsigned short int c = 0x88AB & 0x19C6;
	unsigned  int b = a << 64;
	printf("%d",b);
	*/
/*
	*(int*)(0x1020) == 10;
	printf("%d",0x1020);
*/

	//printf("%d", sizeof(st_A_Type));
	//char *ptr = "Quiz";
	//printf("%x\n", *&ptr);	
	//printf("%x\n", &*ptr);
	/*
	int *a = NULL;
	char b = 10;
	Allocate (&b, 2);
	printf("%x\n", a);
	printf("%x", b);
	*/

/*
	float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;
	printf("%f ", *ptr2);
	printf("%x\n", &arr[0]);	
	printf("%x\n", ptr2);	
	printf("%x\n", ptr1);	
*/
// int b, a;
// a = 5;
// b=  a--+a++;;
// printf("%d",b);
//enum ExampleEnum exampleVar = VALUE_1;

    //printf("Kích thước của enum: %lu byte\n", sizeof(enum ExampleEnum));
    //printf("Kích thước của biến enum: %lu byte\n", sizeof(exampleVar));
	// int a[10001];

    // int n, x;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++){
    //     scanf("%d", &a[i]);
    // }
    // scanf("%d", &x);
    // printf("%d",search(a,n,x));
	/*
	int n, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){Ư
        scanf("%d", &a[i]);
    }
    scanf("%d", &s);
	bool k = solve(a,b,n,s);
	if(k==false){
		printf("-1");
	}
	*/
// int n;
//  int a = 5/3;
//  printf("%d\n", a);
/*
char src[] = "*****";
char dest[] = "0123456789";
memcpy(dest, src, 5);
//memcpy(dest + 3, dest + 2, 5);
printf("%s",dest);
*/
char arr[] = {10, 20, 30, 40, 50, 60};
char *ptr1 = arr;
char *ptr2 = arr + 5;
printf("Number of elements between two pointer are: %d.", (ptr2 - ptr1));
printf("Number of bytes between two pointers are: %d", (float*)ptr2 - (float*) ptr1);
return 0;
	
} 




