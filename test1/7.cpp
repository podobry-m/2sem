void merge_Militech(Property **root_Arasaka, BuildingsCivilian **root_Militech)
{
    BuildingsCivilian *t = *root_Militech;
    Property *a = *root_Arasaka;
    if (a != nullptr)
    {
        while (a->next != NULL)
        {
            a = a->next;
        }
    }
    while (t != NULL)
    {
        Property *p = new Property;
        p->x = t->x;
        p->y = t->y;
        p->price_current = t->price;
        p->price_base = 0;
        if (a == nullptr)
        {
            a = p;
            *root_Arasaka = p;
        }
        else
        {
            a->next = p;
            a = a->next;
        }

        BuildingsCivilian *tmp = t->next;
        delete t;
        t = tmp;
    }
    a->next = nullptr;
}
