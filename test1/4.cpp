unsigned int is_an_invisible_bike(Vehicle *v, unsigned int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (v[i].type == 1 && !v[i].is_visible)
            k++;
    return k;
}