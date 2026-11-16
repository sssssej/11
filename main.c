
#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *p = grade;
    int sum = 0;
    float avg;

    // 배열에 점수 입력
    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = ", i);
        scanf("%d", p + i);
    }

    // 포인터를 이용하여 합계 계산
    for (i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }

    // 평균 계산
    avg = (float)sum / 5;

    printf("평균 = %.2f\n", avg);

    return 0;
}
