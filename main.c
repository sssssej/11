#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;       // 정수형 포인터 변수 선언
    iptr = &i;       // iptr이 i를 가리키게 함

    char *cptr;      // 문자형 포인터 변수 선언
    cptr = &c;       // cptr이 c를 가리키게 함

    int *iptr2;      // 정수형 포인터 변수 선언
    iptr2 = iptr;    // iptr2가 iptr과 같은 곳을 가리키게 함

    printf("i : %p\n%p (size:%i)\n", (void *)iptr, (void *)&i, (int)sizeof(iptr));
    printf("c : %p\n%p (size:%i)\n", (void *)cptr, (void *)&c, (int)sizeof(cptr));
    printf("iptr2 : %p, %i\n", (void *)iptr2, *iptr2);

    return 0;
}
