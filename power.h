int power (int base, int exp)
{
    int rtn = 1;
    while (exp-->0) rtn *= base;
    return rtn;
}
