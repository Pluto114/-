#include <stdio.h>
#include <windows.h>

int main() {
    while (1) {
        // ��ȡ��ǰ����ʱ��
        SYSTEMTIME localTime;
        GetLocalTime(&localTime);
        
        // ���ʱ����Ϣ
        printf("\rCurrent Time: %02d:%02d:%02d", 
               localTime.wHour, localTime.wMinute, localTime.wSecond);
        
        // ��ʱһ��
        Sleep(1000);
    }

    return 0;
}
