#include<stdio.h>
int main(){
	char a;
	int word=0, space=0, number=0, other=0;
	printf("������һ���ַ�Ȼ���Ϊ��ͳ�Ƴ�Ӣ����ĸ���ո���������ָ����������ַ��ĸ���\n");
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
	printf("Ӣ����ĸ������%d���ո������%d�����ָ�����%d�������ַ��ĸ�����%d",word, space, number, other);
	return 0;
}
