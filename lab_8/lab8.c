#include <stdio.h>
#include <locale.h>
#include <math.h>

int prac0()
{
    for (int start = 1; start <= 10; start++)
    {
        printf("*");
    }

    printf("\nПункт *):  ");
    printf("\n");
    printf("+");
    for (int start = 1; start <= 10; start++)
    {
        printf("*");
    }
    printf("+");


    printf("\nПункт **): ");
    printf("\n");
    for (int start = 1; start <= 10; start++)
    {
        if (start <= 5) {
            printf("*");
        }
        else {
            printf("#");
        }
    }


    printf("\nПункт ***): ");
    printf("\n");
    for (int start = 1; start <= 10; start++)
    {
        printf("*");
        printf("!");
    }
}

int prac1(int m, int n, int s, int k)
{
    for (int i = m; i >= n; i--)
    {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    return s;
}

double prac1a(int m, double val)
{
    for (int i = 0; i <= m; i++)
    {
        printf("2^%-2d = %10.0f\n", i, val);
        if (i < m)
        {
            val *= 2.0;
        }
    }
    return val;
}

int prac2(double step)
{

    double x_start = 0.2;
    double x_end = 2.2;

    for (double i = x_start; i <= x_end; i += step)
    {
        double fx = 1.8 * i * i - sin(10.0 * i);
        printf("| %7.4f | %10.4f |\n", i, fx);
    }

    return 0;
}

int dz(int N)
{

    double total_sum = 0.0;
    double sin_sum = 0.0;

    for (int i = 1; i <= N; i++) {
        sin_sum += sin(i);
        total_sum += 1.0 / sin_sum;
    }

    return total_sum;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    printf("\nЗадание 0\n\n");
    prac0();

    printf("\nЗадание 1\n\n");
    int n, m;
    int s = 0;
    int k = 1;
    printf("Введите m (начало) и n (конец): \n");
    scanf("%d", &m);
    scanf("%d", &n);
    if (m > 15)
    {
        printf("Введёно слишком большое значение m!\n");
    }
    else
    {
        printf("результат %d\n", prac1(m, n, s, k));
    }

    double val = 1.0;
    double res;
    printf("\nЗадание 1a\n\n");
    printf("Введите максимальную степень n: ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("Слишком большое значение");
    }
    else
    {
        printf("\nТаблица степеней двойки\n");
        res = prac1a(n, val);
        printf("Результат: %1fK\n", res / 1024.0);
    }

    double step;
    printf("\nВычисление функции для Варианта 3:\n");
    printf("y = 1.8 * x^2 - sin(10 * x)\n");
    printf("Интервал: [0.2; 2.2]\n\n");
    printf("Введите значение шага табуляции (например, 0.1): ");
    scanf("%lf", &step);
    if (step <= 0)
    {
        printf("Введён не положительный шаг!\n");
    }
    else
    {
        printf("\n");
        printf("-------------\n");
        printf("|    x    |    f(x)    |\n");
        printf("-------------\n");
        prac2(step);
        printf("-------------\n");
    }

    int N;
    double ress;
    printf("Домашнее задание\n");
    printf("Введите N: ");
    scanf("%d", &N);
    ress = dz(N);
    printf("Результат для N = %d: %.6f\n", N, ress);

    return 0;
}