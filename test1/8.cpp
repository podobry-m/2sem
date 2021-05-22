void fix_list(BehaviorPattern *root)
{
    BehaviorPattern *t = root;
    if (root != NULL)
    {
        root->prev = NULL;
        do
        {
            if (t->next == NULL)
                break;
            (t->next)->prev = t;
            t = t->next;

        } while (t != root);
    }
}
