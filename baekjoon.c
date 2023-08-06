/* 2557번
#include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
}
*/

/* 1000번
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A + B);
    return 0;
}
*/

/* 1001번
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A - B);
    return 0;
}
*/

/* 10998번
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A * B);
    return 0;
}
*/

/* 1008번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%0.9lf", (double)A / B);       //0.9로 소수점 9자리까지 출력
    return 0;
}
*/

/* 10869번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    return 0;
}
*/

/* 10926번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[50];
    scanf("%s", &a);
    printf("%s??!\n", a);
    return 0;
}
*/

/* 18108번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", a - 543);
    return 0;
}
*/

/* 10430번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a + b) % c);
    printf("%d\n", ((a % c) + (b % c)) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", ((a % c) * (b % c)) % c);
}
*/

/* 2588번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b % 100 - b % 10)/10);    // 정수 나눗셈이기 때문에 *0.1 대신 /10
    printf("%d\n", a * (b - b % 100)/100);
    printf("%d\n", a * b);
    return 0;
}
*/

/* 11382번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long a, b, c;                               // 1 <= a, b, c <= 10^12 조건 때문에 long long 사용
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a + b + c);
    return 0;
}
*/

/* 10171번
#include <stdio.h>

int main() {
    printf("\\\    /\\\ \n");
    printf(" )  ( ') \n");
    printf("(  /  ) \n");
    printf(" \\\(__)| \n");
    return 0;
}
*/

/* 10172번
#include <stdio.h>

int main() {
    printf("|\\_/| \n");               // \ 출력 시 \\, ' 출력 시 \', " 출력 시 \" (문자 앞 \ 붙이기)
    printf("|q p|   /} \n");
    printf("( 0 )\"\"\"\\ \n");
    printf("|\"^\"`    | \n");
    printf("||_/=\\\\__| \n");
    return 0;
}
*/

/* 1330번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf(">");
    }

    else if (a < b) {
        printf("<");
    }

    else{
        printf("==");
    }

    return 0;
}
*/

/* 9498번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100)
        printf("A");

    else if (grade >= 80 && grade <= 89)
        printf("B");

    else if (grade >= 70 && grade <= 79)
        printf("C");

    else if (grade >= 60 && grade <= 69)
        printf("D");

    else
        printf("F");

    return 0;
}
*/

/* 2753번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))          //괄호로 연산자 우선 순위 조절
        printf("1");

    else
        printf("0");
}
*/

/* 14681번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("1");

    else if (x < 0 && y>0)
        printf("2");

    else if (x < 0 && y < 0)
        printf("3");

    else
        printf("4");

    return 0;
}
*/

/* 2884번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    if (m >= 45)
        printf("%d %d", h, m - 45);

    else if (h != 0 && m < 45)
        printf("%d %d", h - 1, 15 + m);

    else if (h == 0 && m < 45)
        printf("%d %d", 23, 15 + m);

    return 0;
}
*/

/* 2525번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int h, m, a;
    scanf("%d %d", &h, &m);
    scanf("%d", &a);

    m += a;

    if ((h + m / 60) >23 && m >= 60) {            // h+=m/60일 때, >23 거짓이어도 실행 되는 것 주의
        h += m / 60 - 24;
        m %= 60;
        printf("%d %d", h, m);
    }

    else if ((h + m / 60) <=23 && m >= 60) {
        h += m / 60;
        m %= 60;
        printf("%d %d", h, m);
    }

    else if (m < 60) {
        printf("%d %d", h, m);
    }


    return 0;
}
*/

/* 2480번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a == b && a != c)
        printf("%d", 1000 + a * 100);

    else if (b == c && b != a)
        printf("%d", 1000 + b * 100);

    else if (a == b && b == c)
        printf("%d", 10000 + a * 1000);

    else
        printf("%d", c * 100);

    return 0;
}
*/

/* 2739번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
*/

/* 10950번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i < (t + 1); i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int result = 0;
    scanf("%d", &n);

    for (int i = 1; i < (n + 1); i++) {
        result += i;
    }

    printf("%d", result);

    return 0;
}
*/

/* 25304번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, n, a, b;
    int sum = 0;
    scanf("%d", &x);
    scanf("%d", &n);

    for (int i = 1; i < (n + 1); i++) {
        scanf("%d %d", &a, &b);
        sum = sum + a * b;
    }

    if (sum == x)
        printf("Yes");

    else
        printf("No");

    return 0;
}
*/

/* 25314번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < (n / 4 + 1); i++) {
        printf("long ");
    }

    printf("int");

    return 0;
}
*/

/* 15552번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long t;
    int a, b;
    scanf("%lld", &t);

    for (long long i = 1; i < (t + 1); i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
*/

/* 11021번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i < (t + 1); i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }

    return 0;
}
*/

/* 11022번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i < (t + 1); i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }

    return 0;
}
*/

/* 2438번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);

    for (int j = 1; j <= i; j++) {        // i = 최대 줄 j = 현재 줄
        for (int k = 1; k <= j; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

/* 2439번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);

    for (int j = 1; j <= i; j++) {                // i = 최대 줄 j = 현재 줄
        for (int m = i-j; m >= 1; m--) {          // 줄 별 공백의 개수는 최대 줄 - 현재 줄
            printf(" ");
        }
        for (int k = 1; k <= j; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

/* 10952번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 1;
    int b = 1;

    while (1){
        scanf("%d %d", &a, &b);
        if (a != 0 && b != 0) {
            printf("%d\n", a + b);
        }
        else
            break;         //일반 while문 조건에 a!=0 && b!=0 나오면 a=0, b=0인 상황에 0+0을 출력하고 종료. 따라서 if문으로 케이스 나누고 0 0 입력 시 break로 무한루프 탈출.
    }
}
*/

/* 10951번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 1;
    int b = 1;

    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }

    return 0;
}
*/

/* 10807번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N = 0;
    int v = 0;
    int a[100] = { 0 };
    int cnt = 0;

    scanf("%d", &N);              // 정수의 개수 N 저장

    for (int m = 0; m < N; m++) {          // 입력된 정수 a[100]에 저장
        scanf("%d", &a[m]);
    }

    scanf("%d", &v);              // 찾으려는 정수 v 저장

    for (int i = 0; i < N; i++) {        // a의 ?번째 자리에 v와 같은 정수가 있는지 판단을 N회 반복
        if (a[i] == v) {
            cnt++;                       // 만약 그렇다면 cnt에 +1
        }
    }

    printf("%d", cnt);

    return 0;
}
*/

/* 10871번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int X;

    scanf("%d %d", &N, &X);

    int a[N];                             //visual studio에선 C99를 채택하지 않아 못했던 기능: 배열의 사이즈를 상수가 아닌 변수로 정하는 것


    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < N; j++) {
        if (a[j] < X) {
            printf("%d ", a[j]);
        }
    }

    return 0;
}
*/

/* 10818번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int N, max, min;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }                                          // a[N] 결정

    max = a[0];                                // 최대를 a[0]이라 임의로 정함
    min = a[0];

    for (int j = 0; j < N; j++){
        if (max < a[j]){                       // 현재 최댓값이 n번째 숫자보다 작다면 n번째 숫자를 현재 최댓값으로 지정
            max = a[j];
        }
    }

    for (int k = 0; k < N; k++){
        if (min > a[k]){
            min = a[k];
        }
    }

    printf("%d %d", min, max);

    return 0;
}
*/

/* 2562번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int max, num;
    int a[9];

    for (int i = 0; i < 9; i++){
        scanf("%d", &a[i]);
    }

    max = a[0];
    num = 1;                              // num=1로 초기화 시 첫번째 숫자가 max일 때 if문 실행 x -> num이 그대로 0

    for (int j = 0; j < 9; j++){
        if (max < a[j]){
            max = a[j];
            num = j + 1;
        }
    }

    printf("%d\n", max);
    printf("%d", num);

    return 0;
}
*/


/* 10810번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, M, i, j, k;
    scanf("%d %d", &N, &M);                             // N개 바구니, M회 공 넣음

    int a[101] = {0};                                   // 바구니 사이즈 정의: N이 최대 100까지. 계산 편리하게 하기 위해 a[101] = 100번째 바구니 되도록 101로

    for (int h = 0; h < M; h++){                        // 공 넣는 것 M회 반복       + 계속 오류 떴던 이유: 위에서 배열을 a로 정의했는데 첫번째 for문에서 int a를 다시 선언함 -> 앞으로 배열은 arr로 하자!!!
        scanf("%d %d %d", &i, &j, &k);                  // i에서 시작, j까지 k공 넣음

        for (i; i <= j; i++){                           // i~j번 위치에 k 넣기
            a[i] = k;
        }
    }

    for (int c = 1; c <= N; c++){                       // 1번~N번 바구니 속 공의 숫자 출력
        printf("%d ", a[c]);
    }

    return 0;
}
*/

/* 10813번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, M, i, j, temp;
    int arr[101];

    scanf("%d %d", &N, &M);

    for (int x = 1; x <= N; x++){                // x번 바구니에 x번 공 넣음
        arr[x] = x;
    }

    for (int y = 1; y <= M; y++){
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int z = 1; z <= N; z++){
        printf("%d ", arr[z]);
    }

    return 0;
}
*/

/* 5597번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n;
    int arr[31];

    for (int m = 1; m <= 30; m++){            // 1~30이 순서대로 저장된 배열
        arr[m] = m;
    }

    for (int a = 1; a <= 28; a++){            // 출석번호 n을 입력 받으면 arr[n]을 0으로 바꿈 -> 입력받지 않은 번호는 arr[n]이 그대로 남아있음
        scanf("%d", &n);
        arr[n] = 0;
    }

    for (int x = 1; x <= 30; x++){            // 입력 받지 않아 arr[n]이 0으로 초기화되지 않은 것들만 출력
        if (arr[x] != 0){
            printf("%d\n", arr[x]);
        }
    }
}
*/

/* 3052번*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(){
    int x, y;
    int cnt = 0;
    int arr[42] = {0, };

    for (int a = 1; a <= 41; a++){
        arr[a] = a;
    }

    for (int b = 1; b <= 10; b++){          // x를 42로 나눈 나머지를 y라고 함. y번째 arr 값을 43으로 해 10번의 계산에서 나온 y를 통해 y번째 arr 값을 바꾸어 나오지 않은 나머지들과 구분함
        scanf("%d", &x);
        y = x % 42;
        arr[y] = 43;                        // 42로 나눴을 때 나머지가 43이 될 수 없으므로 구분을 위해 43이라 설정함
    }

    for (int c = 0; c <= 42; c++){
        if (arr[c] = 43){
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}