# [2018 Fall C Midterm] Changing way

## Description
Input a string(end of '\n') of character(a-z, A-Z and '\*') 

(such as "aBc\*Def", "\*AbC", "ABc\*", "ABc\*Acb\*AAa\*BbB\*C", "\*\*\*", "\*\*", ......)

(You can use getchar method to get  each character and operate it.).

First,  convert the character you get to uppercase. When meet the first '\*', convert the character you get to lowercase. And when meet the second '\*', convert  the character you get to uppercase.when meet the third '\*' ........

For example, "aBc\*Def\*Aaa\*bBB"-->"ABC\*def\*AAA\*bbb"

## Input
A string S, the length of S is between [1, 100000]

## Sample Input 1
```
aBc*Def*Aaa*bBB
``` 

## Sample Output 1
```
ABC*def*AAA*bbb
```

## Sample Input 2
```
Aaa*BbB**CCC*
```

## Sample Output 2
```
AAA*bbb**ccc*
``` 

## Sample Input 3
```
*
```
## Sample Output 3
```
*
```
