//
// Created by sjhuang on 2021/9/1.
//

#include<iostream>
#include<string>


using namespace  std;
class Solution {
public:

    int compareVersion(string version1, string version2) {

        int l1 = version1.size(), l2 = version2.size();
        int i =0, j = 0, x = 0, y = 0;
        while(i < l1 || j < l2){
            x = 0, y = 0;
            while(i < l1 && version1[i] != '.'){
                x = x*10 + version1[i] - '0';
                i++;
            }
            while(j< l2 && version2[j] != '.'){
                y = y*10 + version2[j] - '0';
                j++;
            }
            if(x != y) return x > y ? 1:-1;
            i++;
            j++;
        }
        return 0;
    }
};


int main(){
    Solution soc = Solution();
    string v1, v2;
    cout << "please input two strings " << endl;
    cout << "first: " ;
    cin >> v1 ;
    cout << "second: ";
    cin >> v2;
    int ans = soc.compareVersion(v1,v2);
    cout << "Result: " << ans << endl;
    return 0;
}
