
// #include "common.h"
// #include "add_sub.h"
// #include "mul_div.h"
// int main()
// {
//     int a, b;
//     char c[10];    

//     for(;;){
//     printf("두 수를 입력하세요.\n");
//     scanf("%d %d", &a, &b);
//     printf("원하는 계산을 선택하세요\n[1]덧셈\n[2]뺄셈\n[3]곱셈\n[4]나눗셈\n");
//     scanf("%s", c);

//     if(strcmp(c , "q") == 0 || (strcmp(c , "quit") == 0)){
//         break;
//     }

//     if(strcmp(c, "1")==0) {
//         printf("%d + %d = %d\n", a, b, add(a, b));
//     }
//     else if (strcmp(c, "2") == 0) {
//         printf("%d - %d = %d\n",a, b, sub(a, b));
//     }
//     else if(strcmp(c, "3") == 0) {
//         printf("%d * %d = %d\n",a, b, mul(a, b));
//     }
//     else if(strcmp(c, "4") == 0) {
//         printf("%d / %d = %.2f\n",a, b, divide(a, b));
//     }
//   }
// return 0;
// }


#include "common.h"
#include "add_sub.h"
#include "mul_div.h"
#include "add_sub.c"
#include "mul_div.c"

int main() {
    int a, b;
    char c[10];    

    for(;;) {
        printf("원하는 계산을 선택하세요\n[1]덧셈\n[2]뺄셈\n[3]곱셈\n[4]나눗셈\n[q, quit] 종료\n");
        scanf("%s", c);

        if(strcmp(c , "q") == 0 || strcmp(c , "quit") == 0) {
            break;
        }

        printf("두 수를 입력하세요.\n");
        scanf("%d %d", &a, &b);

        if(strcmp(c, "1") == 0) {
            printf("%d + %d = %d\n", a, b, add(a, b));
        } else if(strcmp(c, "2") == 0) {
            printf("%d - %d = %d\n", a, b, sub(a, b));
        } else if(strcmp(c, "3") == 0) {
            printf("%d * %d = %d\n", a, b, mul(a, b));
        } else if(strcmp(c, "4") == 0) {
            printf("%d / %d = %.2f\n", a, b, divide(a, b));
        } else {
            printf("잘못된 입력입니다. 다시 시도하세요.\n");
        }
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}
