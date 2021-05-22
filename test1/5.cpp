bool rewrite_memories(int *begin, int *end, int *fake, unsigned int n)
{
    bool res = true;
    unsigned int k = end - begin + 1;
    if (k != n)
        res = false;
    k = std::min(k, n);
    for (int i = 0; i < k; i++)
        begin[i] = fake[i];
    return res;
}