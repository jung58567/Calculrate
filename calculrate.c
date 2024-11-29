#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operator;

    // 사용자로부터 두 숫자와 연산자를 입력받음
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &num1);
    printf("연산자를 입력하세요 (+, -, *, /, ^): ");
    scanf(" %c", &operator);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &num2);

    // 연산 수행
    switch (operator) {
        case '+':
            printf("결과: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("결과: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("결과: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("결과: %.2lf\n", num1 / num2);
            else
                printf("오류: 0으로 나눌 수 없습니다.\n");
            break;
        case '^':
            printf("결과: %.2lf\n", pow(num1, num2));
            break;
        default:
            printf("오류: 잘못된 연산자입니다.\n");
    }

    return 0;
}