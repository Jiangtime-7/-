#include<stdio.h>
int main(){
	char a;
	int word=0, space=0, number=0, other=0;
	printf("请输入一行字符然后会为您统计出英文字母，空格个数，数字个数与其他字符的个数\n");
	while((a=getchar())!='\n'){
	if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
		word++;
	}
	else if(a>='0'&&a<='9'){
		number++;
	}
    else if(a=' '){
		space++;
	}
	else other++;
  }
	printf("英文字母个数是%d，空格个数是%d，数字个数是%d，其他字符的个数是%d",word, space, number, other);
	return 0;
}
