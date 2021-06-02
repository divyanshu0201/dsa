int minFlips (string s)
{
    // trying 0101010...
    int ans1 = 0;
    for (int i = 0; i < s.length (); ++i)
    {
        if ((i % 2 == 0 and s[i] == '1') || (i % 2 == 1 and s[i] == '0'))
            ans1++;
    }

    // trying 1010101...
    int ans2 = 0;
    for (int i = 0; i < s.length (); ++i)
    {
        if ((i % 2 == 1 and s[i] == '1') || (i % 2 == 0 and s[i] == '0'))
            ans2++;
    }
    return min (ans1, ans2);
}
