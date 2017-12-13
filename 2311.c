int main()
{
    int tes, i, j;
    char name[1000];
    double dif, score;
    scanf("%d", &tes);
    for(i=1; i<=tes; i++)

    {
        double max = -1, min = 1000, ans = 0;
        scanf("%s", name);
        scanf("%lf", &dif);
        for(j=1; j<=7; j++)
        {
            scanf("%lf", &score);
            if(score > max) max = score;
            if(score < min) min = score;
            ans += score;
        }
        ans -= (max+min);
        ans *= dif;
        printf("%s %.2lf\n", name, ans);
    }
    return 0;
}
