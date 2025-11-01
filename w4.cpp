

void ex4()
{
    int a[Nmax], k, n;
    bool check(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] != k)
        {
            cout << a[i] << " ";
            check = 1;
        }
    }
    if (!check)
        cout << "Empty";
}


void ex6()
{
    int a[Nmax] = {0}, n;
    bool checkDE(0), checkIN(0);
    cout << "hello world";
}
int main()
{
    // ex4();
    //  ex5();
    // cc
    // thien  phuc
    return 0;
}
