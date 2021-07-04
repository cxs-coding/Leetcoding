# Leetcoding practice

## 1. 两数之和  
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。  

## 2. 两数相加  
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。  
请你将两个数相加，并以相同形式返回一个表示和的链表。你可以假设除了数字 0 之外，这两个数都不会以 0 开头。示例如下：    
输入：l1 = [2,4,3], l2 = [5,6,4]  
输出：[7,0,8]  
解释：342 + 465 = 807.  

## 3. 最长字串   
给定一个字符串，请你找出其中不含有重复字符的 最长子串的长度，示例如下：     
输入: s = "abcabcbb"  
输出: 3   
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3   

## 4. 中位数  
给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的中位数。   
输入：nums1 = [1,3], nums2 = [2]  
输出：2.00000  
解释：合并数组 = [1,2,3] ，中位数 2  

## 7. 整数反转  
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。  
如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。  
输入：x = -123  
输出：-321  

## 8. 字符串转整数   
实现一个 myAtoi(string s) 函数，使其能将字符串转换成一个 32 位有符号整数（类似 C/C++ 中的 atoi 函数）。   
函数 myAtoi(string s) 的算法如下：  
* 读入字符串并丢弃无用的前导空格  
* 检查下一个字符（假设还未到字符末尾）为正还是负号，读取该字符（如果有）。 确定最终结果是负数还是正数。 如果两者都不存在，则假定结果为正。   
* 读入下一个字符，直到到达下一个非数字字符或到达输入的结尾。字符串的其余部分将被忽略。   
* 将前面步骤读入的这些数字转换为整数（即，"123" -> 123， "0032" -> 32）。如果没有读入数字，则整数为 0 。必要时更改符号（从步骤 2 开始）。  
* 如果整数数超过 32 位有符号整数范围 [−231,  231 − 1] ，需要截断这个整数，使其保持在这个范围内。  
* 返回整数作为最终结果。  

## 9. 回文数   
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。  
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。  

## 11. 盛最多水的容器  
给你 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0) 。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。  例如：    
输入：[1,8,6,2,5,4,8,3,7]   
输出：49   

## 12. 整数转罗马数字  
罗马数字包含以下七种字符： I， V， X， L，C，D 和 M。  
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。   

## 13. 罗马数转整型   
给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。   

## 20. 有效的括号   
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。  
有效字符串需满足：   
* 左括号必须用相同类型的右括号闭合。  
* 左括号必须以正确的顺序闭合。  

## 21. 合并两个有序链表   
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。  
示例：  
输入：l1 = [1,2,4], l2 = [1,3,4]   
输出：[1,1,2,3,4,4]    

## 24. 两两交换链表中的节点   
给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。  
示例：   
输入：head = [1,2,3,4]    
输出：[2,1,4,3]   

## 26. 删除有序数组中的重复项   
给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。   
不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。   

## 27. 移除元素   
给你一个数组 nums 和一个值 val，你需要 原地移除所有数值等于 val 的元素，并返回移除后数组的新长度。   
不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。   
元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。   

## 28. 实现strStr   
实现 strStr() 函数。  
给你两个字符串 haystack 和 needle ，请你在haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回-1 。  

## 29. 两数相除   
给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。  
返回被除数 dividend 除以除数 divisor 得到的商。   
整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2   

## 35. 搜索插入位置   
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。  

## 38. 外观数列   
给定一个正整数 n ，输出外观数列的第 n 项。   
【外观数列】是一个整数序列，从数字 1 开始，序列中的每一项都是对前一项的描述。   
前五项如下：  
1.     1     
2.     11    
3.     21    
4.     1211
5.     111221
第一项是数字 1     
描述前一项，这个数是 1 即 “ 一 个 1 ”，记作 "11"    
描述前一项，这个数是 11 即 “ 二 个 1 ” ，记作 "21"   
描述前一项，这个数是 21 即 “ 一 个 2 + 一 个 1 ” ，记作 "1211"   
描述前一项，这个数是 1211 即 “ 一 个 1 + 一 个 2 + 二 个 1 ” ，记作 "111221"   

## 53. 最大子序和   
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。   
示例：   
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]   
输出：6    
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。   

## 66. 加一   
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。   
最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。    
假设除了整数 0 之外，这个整数不会以零开头。  
示例：   
输入：digits = [1,2,3]    
输出：[1,2,4]    
解释：输入数组表示数字 123。   

## 82. 删除有序链表中的重复元素   
存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除链表中所有存在数字重复情况的节点，只保留原始链表中 没有重复出现 的数字。   
返回同样按升序排列的结果链表。   
输入：head = [1,2,3,3,4,4,5]   
输出：[1,2,5]   

## 94. 二叉树的中序遍历   
给定一个二叉树的根节点 root ，返回它的 中序 遍历。    
什么是二叉树的中序遍历：按照访问左子树——根节点——右子树的方式遍历这棵树，而在访问左子树或者右子树的时候我们按照同样的方式遍历，直到遍历完整棵树。    

## 101.对称二叉树   
给定一个二叉树，检查它是否是镜像对称的。   
例如，二叉树 [1,2,2,3,4,4,3] 是对称的。   
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的。   

## 104.二叉树的最大深度   
给定一个二叉树，找出其最大深度。   
二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。   
