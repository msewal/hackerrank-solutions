#include <cstdio>

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Sample Input: 3 12345678912345 a 334.23 14049.30493
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Sample Output:
    // 3
    // 12345678912345
    // a
    // 334.230
    // 14049.304930000
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
