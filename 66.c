int *plusOne(int *digits, int digitsSize)
{
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        } else {
            digits[i] = 0;
        }
    }
}
