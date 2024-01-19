/* 
In a land where mathematical puzzles were the talk of the town, there was a peculiar one known as the "clumsy sum." 
This intriguing puzzle required a series of operations to be performed on a given number, N, 
in a rather unique manner.
Adventurers and mathematicians from far and wide gathered to solve this mathematical riddle.
They brought their knowledge and curiosity, hoping to conquer the clumsy sum.

The rules were simple:

Start with N.
Multiply, divide, add, and subtract in sequence.
Repeat on N and the next three consecutive integers, skipping the fourth, until you reach 1.
Adventurers aimed to solve this riddle, each with a test case (N). 
Your task is to write a function, clumsySum(T, N), where T is the number of test cases and 
N is a list of integers. Return the clumsy sum for each case.

With every calculated clumsy sum, the adventurers uncovered the puzzle's secrets, one test case at a time.

Input Format

First line contains the T testcases.

The following T lines contains the integer N.

Constraints

1 <= T <= 10^3

0 <= N <= 10^9

Output Format

Single line returns the clumsy sum.

Sample Input 0

1
2
Sample Output 0

0
Explanation 0

The pattern build is

  2
1 2 1
  2

If we traverse according to condition then it becomes

= 2 * 1 / 2 + 1 - 2

= 0

Sample Input 1

1
3
Sample Output 1

5
Explanation 1

The pattern build is

    3
  2 3 2
1 2 3 2 1
  2 3 2
    3
If we traverse according to condition then it becomes

= 3 * 2 / 3 + 2 - 1 * 2 / 3 + 2 - 1 * 2 / 3 + 2 - 3

= 5 

*/

import java.util.*;
public class Clumsy_Sum{
    public static void main(String[] args) {
        int n = 1;
        while(n --> 0){
            int x = 4, end = 2*x-1, res = x;
            List<Integer> l = new ArrayList<>(), out = new ArrayList<>();
            
            for(int i = 1;i <= end/2+1;i++){                
                for(int j = 1;j <= 2*i-1;j++){
                    if(j <= (2*i)/2 && j != 1)
                        x++;
                    else 
                        x--;
                    l.add(x+1);
                }
            }
            for(int i = end/2;i > 0;i--){                
                for(int j = 1;j <= 2*i-1;j++){
                    if(j <= (2*i)/2)
                        x++;
                    else 
                        x--;
                    l.add(x+1);
                }
            }System.out.println("Pattern in 1d : "+l);
            for(int i=1;i<l.size()-1;i++){
                if(i%4==1)
                    res *= l.get(i);
                else if(i%4==2)
                    res /= l.get(i);
                else if(i%4==3){
                    out.add(res);
                    out.add(l.get(i));
                }
                else 
                    res = l.get(i);
            }
            out.add(l.get(l.size()-1));
            res = out.get(0);
            for(int i = 1;i<out.size();i++)
                if(i%2==1)
                    res += out.get(i);
                else 
                    res -= out.get(i);
            System.out.println(res);
        }
    }
}
/* Testcase: 4
Input :
    99
    100
    110
    21 
Excpected Output:
    197
    197
    215
    39
*/