int main()
{
    int celsius;
    printf("C 온도 : \n");
    scanf("%d", &celsius);
    double fahr;
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("F 온도 : %.2f\n", fahr);
    return 0;
}