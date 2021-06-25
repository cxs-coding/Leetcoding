class Solution {
public:
    string countAndSay(int n) {
        if(n==0)return "";
        string ans = "1";//返回值
        string temp ;    //临时的外观数组
        while(--n){    //循环n-1次
            temp = "";//这里一定记得要初始化为空，否则就是直接加在上一次结果的后面。
            string::iterator it = ans.begin();//遍历字符串的迭代器
            while(it < ans.end()){  //只要还没有遍历结束，继续循环
                int count = 1;
                char key = *it;
                while(*(++it) == key)count++;//这里注意：it要先自加1
                temp += (count+'0');//将个数加在字符串后面
                temp += key;//将字符加在后面
            }
            ans = temp;//更新结果
        }
        return ans;
    }
};
