#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int m = 10;

void change(int *a, int *b){
	int r = *a;
	*a = *b;
	*b = r;
}
int test(){
	static int a = 0;
	printf("%d\n",a);
	a++;


}
int array(int a[])
{
	a[3] = 1;
	return 0;
}
struct t
{
	char a[1024];
	float b;
	
};
void main(int argc, char const *argv[])
{
	int s[5];

	printf("int: %ld\n",sizeof(int));
	printf("long: %ld\n",sizeof(long int));
	printf("float: %ld\n",sizeof(float));
	printf("double: %ld\n",sizeof(double));
	printf("struct: %ld\n",sizeof(struct t));
	int i = 5;
	int a = 10, b = 2;
	change(&a,&b);
	test();
	test();
	array(s);
	printf("a: %d\nb: %d\n",a,b);
	while (i--){
		printf("1\n");
		if (i==3){

			break;
		}
	}
	m++;
	printf("%d\n",m );
	for (int i = 0; i < 5; i++){
		printf("%d\t",s[i]);
	}
	printf("\n");
}