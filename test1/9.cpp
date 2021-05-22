void dismissal(Employee *e)
{
    for (int i = 0; i < e->n_implants; i++)
        if (e->implant_type[i] == 'c')
            e->implant_on[i] = false;
}
