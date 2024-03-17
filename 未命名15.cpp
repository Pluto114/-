#include <stdio.h>
#include <windows.h>

int main() {
    while (1) {
        // 获取当前本地时间
        SYSTEMTIME localTime;
        GetLocalTime(&localTime);
        
        // 输出时间信息
        printf("\rCurrent Time: %02d:%02d:%02d", 
               localTime.wHour, localTime.wMinute, localTime.wSecond);
        
        // 延时一秒
        Sleep(1000);
    }

    return 0;
}
