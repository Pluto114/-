//输入星期几的首字母判断为星期几，如果首字母一样，继续判断第二个字母
#include<stdio.h>  
  
int main(){  
    char c, ch;  
    printf("请输入第一个字母\n");  
    c = getchar();  
    while (getchar() != '\n'); // 清除输入缓冲区中的换行符  
  
    switch(c){  
        case 'm':  
            printf("It's monday!\n");  
            break;  
        case 't':  
            printf("请输入第二个字符:\n");  
            ch = getchar();  
            while (getchar() != '\n'); // 清除输入缓冲区中的换行符  
            switch(ch){  
                case 'h':  
                    printf("It's thursday!\n");  
                    break;  
                case 'u':  
                    printf("It's tuesday!\n");  
                    break;  
            }  
            break;  
        case 'w':  
            printf("It's wednesday!\n");  
            break;  
        case 'f':  
            printf("It's friday!\n");  
            break;  
        case 's':  
            printf("请输入第二个字符:\n");  
            ch = getchar();  
            while (getchar() != '\n'); // 清除输入缓冲区中的换行符  
            switch(ch){  
                case 'a':  
                    printf("It's saturday!\n");  
                    break;  
                case 'u':  
                    printf("It's sunday!\n");  
                    break;  
            }  
            break;  
        default:  
            printf("无法识别的星期首字母\n");  
            break;  
    }  
    return 0;  
}
