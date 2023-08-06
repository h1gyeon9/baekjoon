/* 2557��
#include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
}
*/

/* 1000��
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A + B);
    return 0;
}
*/

/* 1001��
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A - B);
    return 0;
}
*/

/* 10998��
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%d", A * B);
    return 0;
}
*/

/* 1008��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A;
    int B;
    scanf("%d %d", &A, &B);
    printf("%0.9lf", (double)A / B);       //0.9�� �Ҽ��� 9�ڸ����� ���
    return 0;
}
*/

/* 10869��
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

/* 10926��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[50];
    scanf("%s", &a);
    printf("%s??!\n", a);
    return 0;
}
*/

/* 18108��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", a - 543);
    return 0;
}
*/

/* 10430��
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

/* 2588��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b % 100 - b % 10)/10);    // ���� �������̱� ������ *0.1 ��� /10
    printf("%d\n", a * (b - b % 100)/100);
    printf("%d\n", a * b);
    return 0;
}
*/

/* 11382��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long a, b, c;                               // 1 <= a, b, c <= 10^12 ���� ������ long long ���
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a + b + c);
    return 0;
}
*/

/* 10171��
#include <stdio.h>

int main() {
    printf("\\\    /\\\ \n");
    printf(" )  ( ') \n");
    printf("(  /  ) \n");
    printf(" \\\(__)| \n");
    return 0;
}
*/

/* 10172��
#include <stdio.h>

int main() {
    printf("|\\_/| \n");               // \ ��� �� \\, ' ��� �� \', " ��� �� \" (���� �� \ ���̱�)
    printf("|q p|   /} \n");
    printf("( 0 )\"\"\"\\ \n");
    printf("|\"^\"`    | \n");
    printf("||_/=\\\\__| \n");
    return 0;
}
*/

/* 1330��
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

/* 9498��
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

/* 2753��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))          //��ȣ�� ������ �켱 ���� ����
        printf("1");

    else
        printf("0");
}
*/

/* 14681��
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

/* 2884��
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

/* 2525��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int h, m, a;
    scanf("%d %d", &h, &m);
    scanf("%d", &a);

    m += a;

    if ((h + m / 60) >23 && m >= 60) {            // h+=m/60�� ��, >23 �����̾ ���� �Ǵ� �� ����
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

/* 2480��
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

/* 2739��

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

/* 10950��
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

/* 25304��
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

/* 25314��
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

/* 15552��
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

/* 11021��
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

/* 11022��
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

/* 2438��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);

    for (int j = 1; j <= i; j++) {        // i = �ִ� �� j = ���� ��
        for (int k = 1; k <= j; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

/* 2439��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 0;
    scanf("%d", &i);

    for (int j = 1; j <= i; j++) {                // i = �ִ� �� j = ���� ��
        for (int m = i-j; m >= 1; m--) {          // �� �� ������ ������ �ִ� �� - ���� ��
            printf(" ");
        }
        for (int k = 1; k <= j; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

/* 10952��
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
            break;         //�Ϲ� while�� ���ǿ� a!=0 && b!=0 ������ a=0, b=0�� ��Ȳ�� 0+0�� ����ϰ� ����. ���� if������ ���̽� ������ 0 0 �Է� �� break�� ���ѷ��� Ż��.
    }
}
*/

/* 10951��
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

/* 10807��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N = 0;
    int v = 0;
    int a[100] = { 0 };
    int cnt = 0;

    scanf("%d", &N);              // ������ ���� N ����

    for (int m = 0; m < N; m++) {          // �Էµ� ���� a[100]�� ����
        scanf("%d", &a[m]);
    }

    scanf("%d", &v);              // ã������ ���� v ����

    for (int i = 0; i < N; i++) {        // a�� ?��° �ڸ��� v�� ���� ������ �ִ��� �Ǵ��� Nȸ �ݺ�
        if (a[i] == v) {
            cnt++;                       // ���� �׷��ٸ� cnt�� +1
        }
    }

    printf("%d", cnt);

    return 0;
}
*/

/* 10871��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int X;

    scanf("%d %d", &N, &X);

    int a[N];                             //visual studio���� C99�� ä������ �ʾ� ���ߴ� ���: �迭�� ����� ����� �ƴ� ������ ���ϴ� ��


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

/* 10818��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int N, max, min;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }                                          // a[N] ����

    max = a[0];                                // �ִ븦 a[0]�̶� ���Ƿ� ����
    min = a[0];

    for (int j = 0; j < N; j++){
        if (max < a[j]){                       // ���� �ִ��� n��° ���ں��� �۴ٸ� n��° ���ڸ� ���� �ִ����� ����
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

/* 2562��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int max, num;
    int a[9];

    for (int i = 0; i < 9; i++){
        scanf("%d", &a[i]);
    }

    max = a[0];
    num = 1;                              // num=1�� �ʱ�ȭ �� ù��° ���ڰ� max�� �� if�� ���� x -> num�� �״�� 0

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


/* 10810��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, M, i, j, k;
    scanf("%d %d", &N, &M);                             // N�� �ٱ���, Mȸ �� ����

    int a[101] = {0};                                   // �ٱ��� ������ ����: N�� �ִ� 100����. ��� ���ϰ� �ϱ� ���� a[101] = 100��° �ٱ��� �ǵ��� 101��

    for (int h = 0; h < M; h++){                        // �� �ִ� �� Mȸ �ݺ�       + ��� ���� ���� ����: ������ �迭�� a�� �����ߴµ� ù��° for������ int a�� �ٽ� ������ -> ������ �迭�� arr�� ����!!!
        scanf("%d %d %d", &i, &j, &k);                  // i���� ����, j���� k�� ����

        for (i; i <= j; i++){                           // i~j�� ��ġ�� k �ֱ�
            a[i] = k;
        }
    }

    for (int c = 1; c <= N; c++){                       // 1��~N�� �ٱ��� �� ���� ���� ���
        printf("%d ", a[c]);
    }

    return 0;
}
*/

/* 10813��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, M, i, j, temp;
    int arr[101];

    scanf("%d %d", &N, &M);

    for (int x = 1; x <= N; x++){                // x�� �ٱ��Ͽ� x�� �� ����
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

/* 5597��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n;
    int arr[31];

    for (int m = 1; m <= 30; m++){            // 1~30�� ������� ����� �迭
        arr[m] = m;
    }

    for (int a = 1; a <= 28; a++){            // �⼮��ȣ n�� �Է� ������ arr[n]�� 0���� �ٲ� -> �Է¹��� ���� ��ȣ�� arr[n]�� �״�� ��������
        scanf("%d", &n);
        arr[n] = 0;
    }

    for (int x = 1; x <= 30; x++){            // �Է� ���� �ʾ� arr[n]�� 0���� �ʱ�ȭ���� ���� �͵鸸 ���
        if (arr[x] != 0){
            printf("%d\n", arr[x]);
        }
    }
}
*/

/* 3052��*/

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(){
    int x, y;
    int cnt = 0;
    int arr[42] = {0, };

    for (int a = 1; a <= 41; a++){
        arr[a] = a;
    }

    for (int b = 1; b <= 10; b++){          // x�� 42�� ���� �������� y��� ��. y��° arr ���� 43���� �� 10���� ��꿡�� ���� y�� ���� y��° arr ���� �ٲپ� ������ ���� ��������� ������
        scanf("%d", &x);
        y = x % 42;
        arr[y] = 43;                        // 42�� ������ �� �������� 43�� �� �� �����Ƿ� ������ ���� 43�̶� ������
    }

    for (int c = 0; c <= 42; c++){
        if (arr[c] = 43){
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}