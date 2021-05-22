void rip_samurai(const Track *all_songs, unsigned int all_n, Track **in_memoriam_johnny, unsigned int *johnny_n)
{
    int k = 0;
    for (int i = 0; i < all_n; i++)
        if (all_songs[i].author == 0)
            k++;

    *in_memoriam_johnny = new Track[k];
    k = 0;
    for (int i = 0; i < all_n; i++)
        if (all_songs[i].author == 0)
        {

            (*in_memoriam_johnny)[k] = all_songs[i];
            k++;
        }
    *johnny_n = k;
}