//�������ڼ�������ĸ�ж�Ϊ���ڼ����������ĸһ���������жϵڶ�����ĸ
#include<stdio.h>  
  
int main(){  
    char c, ch;  
    printf("�������һ����ĸ\n");  
    c = getchar();  
    while (getchar() != '\n'); // ������뻺�����еĻ��з�  
  
    switch(c){  
        case 'm':  
            printf("It's monday!\n");  
            break;  
        case 't':  
            printf("������ڶ����ַ�:\n");  
            ch = getchar();  
            while (getchar() != '\n'); // ������뻺�����еĻ��з�  
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
            printf("������ڶ����ַ�:\n");  
            ch = getchar();  
            while (getchar() != '\n'); // ������뻺�����еĻ��з�  
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
            printf("�޷�ʶ�����������ĸ\n");  
            break;  
    }  
    return 0;  
}
