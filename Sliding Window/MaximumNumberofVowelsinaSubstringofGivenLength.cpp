class Solution {
public:
bool isVowel(char c){
    return (c== 'a' || c== 'e' || c == 'i' || c == 'o' ||
                c == 'u');
}
    int maxVowels(string s, int k) {
        int n = s.size();
        int l = 0, r = 0;
        int vowel = 0;
        int maxi = INT_MIN;
        while (r < n) {
            if (isVowel(s[r])) {
                vowel++;
            }
            if (r - l + 1 > k) {
                if (isVowel(s[l])) {
                    vowel--;
                }
                l++;
            }
            maxi = max(vowel,maxi);
            r++;
        }
        return maxi;
    }
};
