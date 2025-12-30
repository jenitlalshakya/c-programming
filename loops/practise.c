// #include <stdio.h>

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++){
//             printf("*");
//         }
//             printf("\n");

//     }
// }

// #include <stdio.h>

// int main() {
//     for (int i=1; i<=4; i++) {
//         for (int j=1; j<=i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (int i=4; i>=1; i--) {
//         for (int j=1; j<=i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (int i=1; i<=4; i++) {
//         for (int j=1; j<=i; j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (int i=4; i>=1; i--) {
//         for (int j=1; j<=i; j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (int i=1; i<=4; i++) {
//         for (int j=1; j<=i; j++) {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (char i='A'; i<= 'D' ; i++) {
//         for (char j='A'; j<=i; j++) {
//             printf("%c", j);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (char i='D'; i>= 'A' ; i--) {
//         for (char j='A'; j<=i; j++) {
//             printf("%c", j);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}