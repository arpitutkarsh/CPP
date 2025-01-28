class Solution {
private:
    bool validchar(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    char lowercase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool pallindrome(string a){
    int start = 0;
    int end = a.length()-1;
    while(start < end){
        if(a[start] != a[end]){
            return 0; 
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i< s.length(); i++){
            if(validchar(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i< s.length(); i++){
            temp[i] = lowercase(temp[i]);
        }
        return pallindrome(temp);
    }
};