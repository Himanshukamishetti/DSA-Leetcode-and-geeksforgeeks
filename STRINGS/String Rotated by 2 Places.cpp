class Solution {
  public:
         bool rotateclockwise(string s1, string s2){
            int n = s1.length();
            
            for(int i=0;i<n;i++){
                if(s1[i]!=s2[(i+2)%n]){
                    return false;
                }
            }
            return true;
        }
        bool rotateanticlockwise(string s1, string s2){
            int n=s1.length();
            
            for(int i=0;i<n;i++){
                if(s1[i]!=s2[(n-2+i)%n]){
                    return false;
                }
            }
            return true;
        }
        
    bool isRotated(string& s1, string& s2) {
        if(s1.length()!=s2.length()) return false;
        
        bool clockwise = rotateclockwise(s1,s2);
        bool anticlockwise = rotateanticlockwise(s1,s2);
        return clockwise||anticlockwise;
    }
};
