class Solution{
public:
    int inSequence(int A, int B, int C){
        if (C == 0)
        return (B == A);

    return ((B - A) % C == 0 && (B - A) / C >= 0);
    }
};
