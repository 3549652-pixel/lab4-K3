/*
 * Laboratorna robota No. 4. Tsyklichni algorytmy
 * Variant: K = 3
 * Zavdannia: 11, 18, 37, 74, 135, 226, 73, 242, 179, 170
 *
 * Usi 10 zavdan vykonuiutsia po cherzi, bez menu.
 * Bez masyviv ta inshykh skladnykh struktur danykh.
 * Kompiliatsiia: gcc lab4_K3.c -o lab4 -lm
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Zavdannia 11 */
    printf("\n--- Zavdannia 11 ---\n");
    {
        int i;

        printf("Diuymy    Santymetry\n");
        for (i = 10; i <= 22; i++) {
            printf("%6d    %9.2f\n", i, i * 2.54);
        }
    }

    /* Zavdannia 18 */
    printf("\n--- Zavdannia 18 ---\n");
    {
        int i;

        for (i = 2; i <= 20; i++) {
            printf("sin(%d) = %.6f\n", i, sin(i));
        }
    }

    /* Zavdannia 37 */
    printf("\n--- Zavdannia 37 ---\n");
    {
        int n, i;
        double p = 1;

        printf("Vvedit naturalne n: ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            p = p * (1 - 1.0 / (2 * i));
        }
        printf("P = %.8f\n", p);
    }

    /* Zavdannia 74 */
    printf("\n--- Zavdannia 74 ---\n");
    {
        int n, i;
        double x, sum = 1, term = 1;

        do {
            printf("Vvedit n (2..10) ta x: ");
            scanf("%d %lf", &n, &x);
        } while (n < 2 || n > 10);

        for (i = 1; i <= n; i++) {
            term = term * x / i;
            sum = sum + term;
        }
        printf("S = %.8f\n", sum);
    }

    /* Zavdannia 135 */
    printf("\n--- Zavdannia 135 ---\n");
    {
        int a, b, c, count = 0;

        printf("1 grn   2 grn   5 grn\n");
        for (a = 0; a <= 10; a++) {
            for (b = 0; b <= 10; b++) {
                c = 10 - a - b;
                if (c >= 0 && a + 2 * b + 5 * c == 27) {
                    printf("%5d   %5d   %5d\n", a, b, c);
                    count++;
                }
            }
        }
        printf("Kil'kist variantiv: %d\n", count);
    }

    /* Zavdannia 226 */
    printf("\n--- Zavdannia 226 ---\n");
    {
        double a, b, h, x, y;

        do {
            printf("Vvedit a, b ta krok h: ");
            scanf("%lf %lf %lf", &a, &b, &h);
        } while (h <= 0 || a > b);

        printf("       x          F(x)\n");
        for (x = a; x <= b + 0.00000001; x = x + h) {
            y = 2 * cos(x) - 1;
            printf("%8.3f      %10.6f\n", x, y);
        }
    }

    /* Zavdannia 73 */
    printf("\n--- Zavdannia 73 ---\n");
    {
        int n, i;
        double sum = 1, fact = 1;

        do {
            printf("Vvedit n (2..10): ");
            scanf("%d", &n);
        } while (n < 2 || n > 10);

        for (i = 1; i <= n; i++) {
            fact = fact * i;
            sum = sum + 1.0 / fact;
        }
        printf("S = %.8f\n", sum);
    }

    /* Zavdannia 242 */
    printf("\n--- Zavdannia 242 ---\n");
    {
        double a, b, h, x, y;

        do {
            printf("Vvedit a, b ta krok h: ");
            scanf("%lf %lf %lf", &a, &b, &h);
        } while (h <= 0 || a > b);

        printf("       x          F(x)\n");
        for (x = a; x <= b + 0.00000001; x = x + h) {
            y = x * x * sin(x) * sin(x) + 1;
            printf("%8.3f      %10.6f\n", x, y);
        }
    }

    /* Zavdannia 179 */
    printf("\n--- Zavdannia 179 ---\n");
    {
        int first, current, count = 1;

        printf("Vvedit poslidovnist tsilykh chysel (kinets - 0):\n");
        scanf("%d", &first);
        scanf("%d", &current);

        while (current == first) {
            count++;
            scanf("%d", &current);
        }

        while (current != 0) {
            scanf("%d", &current);
        }

        printf("Na pochatku odnakovykh elementiv: %d\n", count);
    }

    /* Zavdannia 170 */
    printf("\n--- Zavdannia 170 ---\n");
    {
        double n, left, right, unused;
        int i = 1, j;

        printf("Vvedit chyslo n: ");
        scanf("%lf", &n);
        printf("Vvedit 15 chysel za zrostanniam:\n");

        scanf("%lf", &left);
        printf("Chysla menshi za n: %.3f ", left);
        scanf("%lf", &right);

        while (right < n) {
            printf("%.3f ", right);
            left = right;
            i++;
            scanf("%lf", &right);
        }

        printf("\nChyslo n lezhyt mizh elementamy:\n");
        printf("%d (%.3f) i %d (%.3f)\n", i, left, i + 1, right);

        /* Dochytuiemo reshtu chysel, masyv ne vykorystovuiemo. */
        for (j = i + 2; j <= 15; j++) {
            scanf("%lf", &unused);
        }
    }

    return 0;
}
