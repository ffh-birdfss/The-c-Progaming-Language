#include<stdio.h>
#include<string.h>

void mystrcat(char *s, char *t);
int main(){
	char fir[255]= "abc";	//这里还需要注意数组越界问题，需要合理设置大小
							//不然会导致其他的问题 
	char *sec= "123";
	mystrcat(fir,sec);
	printf("%s\n", fir);
	return 0;
}

void mystrcat(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++)
	;
}

/*当fir为指针时无法通过编译，why? 
因为strcat函数需要写入，而fir为指针时，修改字符串的内容，结果是没有定义的 
所以写入的字符串需要用char fir[MAXSIZE]来定义 

////////////////
void mystrcat(char *s, char *t);
int main(){
	char *fir= "abc";
	char *sec= "123";
	printf("%s", fir);
	printf("%s\n", sec);
	mystrcat(fir,sec);
	printf("%s", fir);
	return 0;
}

void mystrcat(char *s, char *t){
	while(*s)
		s++;
	while(*s++ = *t++)
	;
}
