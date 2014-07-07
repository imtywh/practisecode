#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int intdis(char *p, int i){
	int t=1/*,flag=0*/;
	int cs=1;
	char *temp = p;
	while (i>10){
		cs *= 10;
	//	if (flag == 0) t++;
		if ((i / cs) < 10)
		{
		//	flag = 1;
			*temp++ = (char)((int)(i / cs) + 48);
			i -= (int)(i / cs)*cs;
			cs = 1;
		}
		
	}
	*temp++ = (char)(i+ 48);
	return  (int)(temp-p);
}

void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr){
	int i = 1;
	const char *next = pInputStr + 1;
	while (lInputLen--){
		if (*pInputStr == * next){
			i++;
		}
		else {
			if (i != 1){
				//*pOutputStr++ = (char)(i + 48);
				pOutputStr += intdis(pOutputStr, i);
			}
			*pOutputStr++ = *pInputStr;
			//*pOutputStr++ = i;
			i = 1;
		}
		pInputStr++;
		next++;
	}
/*int cnt;
		const char *pre = pInputStr; 
	const char *cur = pInputStr + 1;
	*pOutputStr++ = *pre;
	cnt = 1;
	while (lInputLen--)
	{
		//	printf("%c", *cur++);
		if (*pre == *cur){
			cnt++;
		}
		else {
			*pOutputStr = *cur;
			cnt = 1;
		}
		cur++;
	}*/
}

int main(){  //stringzip 字符串压缩  支持连续超过10位的相同字符压缩
	int n = 100;
	const char *i = "akkkhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhndgggxbbb";
        char *p = (char*)malloc(n*sizeof(char));
	memset(p, '\0', n*sizeof(char)); //初始化
	stringZip(i, strlen(i), p);
	printf("%s\n", p);
	return 0;
}
