#include<stdio.h>
int main ()
{
char a[50];
    int i=0;
    int count=0;
    while((a[i]=getchar())!='.'){            //计算字符数组的字符数量
        i++;
    }
    a[i]='\0';                           //加上\0
        for(i=0;a[i]!='\0';i++){            //遍历字符数组
        if(a[i]!=' '){                      //计算一个单词多少字符   
            count++;
        }else{
            if(count!=0){
                printf("%d ",count);}
            count=0;
            }
        }
        printf("%d",count);
}
