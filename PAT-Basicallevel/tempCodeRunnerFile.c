#include <stdio.h>

// int main() {
//     int N;
//     char sign;
//     scanf("%d %c", &N, &sign);
//     if (N < 7) {
//         printf("%c\n%d", sign, N - 1);
//         return 0;
//     }

//     int topLevel = 0;
//     int curLeverCount = 1;
//     int useNum = 1;
//     while (useNum + (curLeverCount + 2) * 2 <= N) {
//         curLeverCount += 2;
//         useNum += curLeverCount * 2;
//         topLevel++;
//     }

// //    打印上部分
//     for (int i = 0; i < topLevel; i++) {
//         for (int k = 0; k < i; k++) {
//             putchar(' ');
//         }

//         for (int j = 0; j < curLeverCount; j++) {
//             putchar(sign);
//         }
//         curLeverCount = curLeverCount - 2;
//         putchar('\n');
//     }

// //    打印中间
//     for (int k = 0; k < topLevel; k++) {
//         putchar(' ');
//     }
//     printf("%c\n", sign);

// //    打印下部分
//     for (int i = topLevel - 1; i >= 0; i--) {
//         curLeverCount = curLeverCount + 2;
//         for (int k = i; k > 0; k--) {
//             putchar(' ');
//         }

//         for (int j = 0; j < curLeverCount; j++) {
//             putchar(sign);
//         }
//         putchar('\n');
//     }

//     printf("%d", N - useNum);

//     return 0;
// }