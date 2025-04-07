#include <stdio.h>

int main() {
    long long n;
    long long num;
    int cnt;

    while (scanf("%lld", &n) != EOF) {
        num = 1;  
        cnt = 1;  
        while (1) {
            if (num % n == 0) {  // n의 배수인지 확인
                break;
            }
            num = (num * 10 + 1) % n;  // 1을 추가한 뒤 나머지 계산
            cnt++;  // 자릿수 증가
        }
        printf("%d\n", cnt);  
    }
    return 0;
}