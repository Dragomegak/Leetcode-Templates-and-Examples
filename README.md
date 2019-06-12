# Leetcode
## 1. Dynamic Programming
When to use: 之后的结果对前面没有影响，并且存在关系 F(n)=f(F(k<n)). 解决dp问题关键是找到推进公式  
问题格式： HOW MANY?? MAXMUM/MINMUM?? TURE/FALSE?? Longest/Largest??  
### a) 1D, 找到公式后得到下一个
i) 公式只用前面一个element: [counting bits](https://github.com/chbyang/Leetcode/blob/master/code/0338Counting%20Bits.h)  
ii) 公式用前面几个elements: [House Robber I](https://github.com/chbyang/Leetcode/blob/master/code/0198House%20Robber.h), [II](https://github.com/chbyang/Leetcode/blob/master/code/0213House%20Robber%20II.h) (Similar: [Delete and Earn](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0740.%20Delete%20and%20Earn.h)) / Sum可重复排列[Coin Change](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0322.%20Coin%20Change.h) (Similar: [Combination Sum IV](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0377.%20Combination%20Sum%20IV.h)) / [Coin Path](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0656.%20Coin%20Path.h) / [4 Keys Keyboard](https://github.com/chbyang/Leetcode/blob/master/code/0651_4%20Keys%20Keyboard.h) (Similar: [Integer Break](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0343.%20Integer%20Break.h))  
iii)  扫描所有K次: Sum可重复组合[Coin Change 2](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0518.%20Coin%20Change%202.h) / Sum不重复[Partition Equal Subset Sum](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0416.%20Partition%20Equal%20Subset%20Sum.h) (Similar: [Target Sum](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0494.%20Target%20Sum.h)) / [Largest Sum of Averages](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0813.%20Largest%20Sum%20of%20Averages.h) / [Last Stone Weight II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1049.%20Last%20Stone%20Weight%20II.h)  
iv) 公式用前面所有elements: [Number of Longest Increasing Subsequence](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0673.%20Number%20of%20Longest%20Increasing%20Subsequence.h) / [Longest Arithmetic Sequence](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1027.%20Longest%20Arithmetic%20Sequence.h) / [Unique Binary Search](https://github.com/chbyang/Leetcode/blob/master/code/0096Unique%20Binary%20Search%20Trees.h)  / [Perfect Squares](https://github.com/chbyang/Leetcode/blob/master/code/0279Perfect%20Squares.h) / [Word break](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0139.%20Word%20Break.h) / [2 Keys Keyboard](https://github.com/chbyang/Leetcode/blob/master/code/0650_2%20Keys%20Keyboard.h)  
### b) 2D
[Template](https://github.com/chbyang/Leetcode/blob/master/template/2D_DP1.cpp)  
小技巧，通常内存可以2D压缩为1D，如果公式是k[i][j]=k[i-1][j-1]+k[i-1][j]。可以直接存一个vector，计算时从最后算，避免覆盖  
i) 公式递进: [Edit Distance](https://github.com/chbyang/Leetcode/blob/master/code/0072Edit%20Distance.h) (Similar: [Minimum ASCII Delete Sum for Two Strings](https://github.com/chbyang/Leetcode/blob/master/code/0712Minimum%20ASCII%20Delete%20Sum%20for%20Two%20Strings.h) / [Delete Operation for Two Strings](https://github.com/chbyang/Leetcode/blob/master/code/0583Delete%20Operation%20for%20Two%20Strings.h) / [Regular expression](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0010.%20Regular%20Expression%20Matching.h) / [Wildcard matching](https://github.com/chbyang/Leetcode/blob/master/code/0044Wildcard%20Matching.h) / [Interleaving String](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0097.%20Interleaving%20String.h) / [Distinct Subsequences](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0115.%20Distinct%20Subsequences.h)) / [Dungeon Game](https://github.com/chbyang/Leetcode/blob/master/code/0174Dungeon%20Game.h) / [Paint House I](https://github.com/chbyang/Leetcode/blob/master/code/0256Paint%20House.h), [II](https://github.com/chbyang/Leetcode/blob/master/code/0265Paint%20House%20II.h) / [Bomb Enemy](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0361.%20Bomb%20Enemy.h) / [Maximal Square](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0221.%20Maximal%20Square.h) / [Longest Palindromic Subsequence](https://github.com/chbyang/Leetcode/blob/master/code/0516Longest%20Palindromic%20Subsequence.h) (Similar: [Maximum Length of Repeated Subarray](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0718Maximum%20Length%20of%20Repeated%20Subarray.h) / [Largest Divisible Subset](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0368.%20Largest%20Divisible%20Subset.h)) / [Uncrossed Lines](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1035.%20Uncrossed%20Lines.h) /[Longest String Chain](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1048.%20Longest%20String%20Chain.h)  
ii) 2D整体到下一步: [Knight Dialer](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0935.%20Knight%20Dialer.h) / [Knight Probability in Chessboard](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0688.%20Knight%20Probability%20in%20Chessboard.h) / [Out of Boundary Paths](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0576.%20Out%20of%20Boundary%20Paths.h)  
iii) 1D扩为2D, state是新的degree, 内存可2D压缩为1D: [Paint Fence](https://github.com/chbyang/Leetcode/blob/master/code/0276Paint%20Fence.h) / [Minimum Swaps To Make Sequences Increasing](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0801Minimum%20Swaps%20To%20Make%20Sequences%20Increasing.h) / [Max Consecutive Ones II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0487.%20Max%20Consecutive%20Ones%20II.h) / [Domino and Trimino Tiling](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0790.%20Domino%20and%20Tromino%20Tiling.h) / [Odd Even Jump](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0975.%20Odd%20Even%20Jump.h) / [Best Time to Buy and Sell Stock III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0123.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20III.h), [IV](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0188.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20IV.h), [with Cooldown](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0309.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Cooldown.h)  
iv) 对角线推进: [Add Parentheses](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0241.%20Different%20Ways%20to%20Add%20Parentheses.h) / [Burst Bolloons](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0312Burst%20Balloons.h) / [Stone Game](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0877.%20Stone%20Game.h) / [Palindrome Partitioning](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0132.%20Palindrome%20Partitioning%20II.h)  
### c) Memoizatoin: Top Down
[Word Break II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0140.%20Word%20Break%20II.h) / [Race Car](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0818.%20Race%20Car.h)  
### d) 3D
[Remove Boxes](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0546.%20Remove%20Boxes) / [Cherry Pickup](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0741.%20Cherry%20Pickup.h)
## 2. Binary Search
### a) 不一定找到：
[Template 1](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/BinarySearch1.cpp)  
[Binary Search](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0704Binary%20Search.h) / [Guess Number Higher or Lower](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0374Guess%20Number%20Higher%20or%20Lower.h)  
### b) 一定能找到：
[Template 2](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/BinarySearch2.cpp)  
i) mid>() return left-1; 找到的left>target; left-1<=target  
[Sqrt](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0069.%20Sqrt(x).h) / [First Bad Version](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0278First%20Bad%20Version.h) / [Arranging Coins](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0441Arranging%20Coins.h) / [Single Element in a Sorted Array](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0540.%20Single%20Element%20in%20a%20Sorted%20Array.h)  
ii) mid>=() return left; 找到的left>=target; left-1<target  
[H-Index II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0275H-Index%20II.h) / [Koko eating bananas](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0875Koko%20Eating%20Bananas.h) / [Capacity To Ship Packages Within D Days](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1011.%20Capacity%20To%20Ship%20Packages%20Within%20D%20Days.h) (Similar: [Split Array Largest Sum](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0410.%20Split%20Array%20Largest%20Sum.h))/ [Kth Smallest Element in a sorted Matrix](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0378Kth%20Smallest%20Element%20in%20a%20Sorted%20Matrix.h)  
### c) upper_bound, lower_bound
[Max Sum of Rectangle No Larger Than K](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0363.%20Max%20Sum%20of%20Rectangle%20No%20Larger%20Than%20K.h) / [Longest Increasing Subsequence](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0300.%20Longest%20Increasing%20Subsequence.h) (Similar: [Russian Doll Envolopes](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0354.%20Russian%20Doll%20Envelopes.h)) / [Odd Even Jump](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0975.%20Odd%20Even%20Jump.h) / [Number of Matching Subsequences](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0792.%20Number%20of%20Matching%20Subsequences.h)  
### d) nth_element
[Two City Scheduling](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1029.%20Two%20City%20Scheduling.h)
## 3. DFS
every try must be correct if backtrack not used  
i) grid [Template 1](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/DFS.cpp)  
[Longest Increasing Path in a Matrix](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0329.%20Longest%20Increasing%20Path%20in%20a%20Matrix.h) / [Making A Large Island](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0827.%20Making%20A%20Large%20Island.h) / [Coloring A Border](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1034.%20Coloring%20A%20Border.h) / [Candy Crush](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0723.%20Candy%20Crush.h)  
ii) vector [Coin Change](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0322.%20Coin%20Change.h) / 
## 4. Backtracking
### a) 找出所有路径（backtrack 返回void）
i) 对vector上的元素每个都试一下, O(2^N) [Template 1](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/BackTracking1.cpp)  
Combination Sum [I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0039Combination%20Sum.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0040Combination%20Sum%20II.h), [III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0216.%20Combination%20Sum%20III.h) / (Similar: [Shopping Offers](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0638.%20Shopping%20Offers.h)) / [Expression Add Operators](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0282.%20Expression%20Add%20Operators.h) / Subsets [I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0078.%20Subsets.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0090.%20Subsets%20II.h) / [Combinations](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0077.%20Combinations.h) / [Binary Watch](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0401.%20Binary%20Watch.h) / [Palindrome Partitioning](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0131.%20Palindrome%20Partitioning.h) / [Letter Combinations of a Phone Number](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0017.%20Letter%20Combinations%20of%20a%20Phone%20Number.h) / [Generate Parentheses](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0022.%20Generate%20Parentheses.h)  
ii) 2D try different pos: [N Queues I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0051.%20N-Queens.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0052.%20N-Queens%20II.h) / [Sudoku Solver](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0037.%20Sudoku%20Solver)  
iii) O(N!): Permutations [I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0046.%20Permutations.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0047.%20Permutations%20II.h) (Similar: [Number of Squareful Arrays](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0996.%20Number%20of%20Squareful%20Arrays.h))  
iv) tree: [Binary Tree Paths](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0257.%20Binary%20Tree%20Paths.h) / [Path Sum II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0113.%20Path%20Sum%20II.h)  
### b) 找出一条路径（backtrack 返回 bool）
[Template 2](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/BackTracking2.cpp)  
[Lowest Common Ancestor of a Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0236Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree.h) / [Word search](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0079.%20Word%20Search.h) / [Reconstruct Itinerary](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0332.%20Reconstruct%20Itinerary.h)  
### c) 找出多条路径，组成一个路径
[Partition to K equal Sum](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0698.%20Partition%20to%20K%20Equal%20Sum%20Subsets.h) / [Pyramid Transition Matrix](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0756.%20Pyramid%20Transition%20Matrix.h)
## 5. BFS
### a) Result related to level
i) Grid: [Template](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/BFS.cpp)  
[Walls and Gates](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0286.%20Walls%20and%20Gates.h) / [01 Matrix](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0542.%2001%20Matrix.h) / [Sliding Puzzle](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0773.%20Sliding%20Puzzle.h)  
ii) Vector: [Snakes and Ladders](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0909.%20Snakes%20and%20Ladders.h) /  
iii) Graph: [Is Graph Bipartite?](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0785.%20Is%20Graph%20Bipartite.h) / [Cheapest Flights Within K Stops](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0787.%20Cheapest%20Flights%20Within%20K%20Stops.h) / [Bus Routes](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0815.%20Bus%20Routes.h) / [All Nodes Distance K in Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0863.%20All%20Nodes%20Distance%20K%20in%20Binary%20Tree.h)  
### b) Graph can go back to previous node: 
[Maze I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0490.%20The%20Maze.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0505.%20The%20Maze%20II.h), [III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0499.%20The%20Maze%20III.h)  
### c) Bidirectional: 
[Open the Lock](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0752.%20Open%20the%20Lock.h) /  
## 6. Recursive
When to use: 整体和局部都有相同的性质，利用这些性质。最直接的应用就是tree, palindrome string  
i) Number: [Permutation Sequence](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0060.%20Permutation%20Sequence.h)  
ii) String: [Scramble String](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0087.%20Scramble%20String.h)  
## 7. Greedy
Jump Game [I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0055.%20Jump%20Game.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0045.%20Jump%20Game%20II.h) / [Gas Station](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0134.%20Gas%20Station.h) / [Video Stitching](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1024.%20Video%20Stitching.h) / [Course Schedule III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0630.%20Course%20Schedule%20III.h) / [Coin Change](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0322.%20Coin%20Change.h) / [Distant Barcodes](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1054.%20Distant%20Barcodes.h) / [Delete Columns to Make Sorted II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0955.%20Delete%20Columns%20to%20Make%20Sorted%20II.h) / [Non-overlapping Intervals](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0435.%20Non-overlapping%20Intervals.h)  
## 8. Union Find
[Template](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/UnionFind.cpp)  
[Redundant Connection I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0684.%20Redundant%20Connection.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0685.%20Redundant%20Connection%20II.h) / [Friend Circles](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0547.%20Friend%20Circles.h) / [Satisfiability of Equality Equations](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0990.%20Satisfiability%20of%20Equality%20Equations.h) / [Sentence Similarity II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0737.%20Sentence%20Similarity%20II.h) / [Evaluate Division](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0399.%20Evaluate%20Division.h) / [Most Stones Removed with Same Row or Column](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0947.%20Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column.h) /[Largest Component Size by Common Factor](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0952.%20Largest%20Component%20Size%20by%20Common%20Factor.h) / [Accounts Merge](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0721.%20Accounts%20Merge.h)  
## 9. Sliding Window
[Template](https://github.com/chbyang/Leetcode/blob/master/template/SlidingWindow1.cpp)  
i) position [Grumpy Bookstore Owner](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1052.%20Grumpy%20Bookstore%20Owner.h) / [Max Consecutive Ones III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1004.%20Max%20Consecutive%20Ones%20III.h)  
ii) unordered_map [Longest Substring Without Repeating Characters](https://github.com/chbyang/Leetcode/blob/master/code/0003LongestSubstrWithoutRepeatingCharacters.h) (Similar: [Longest Substring with At Most K Distinct](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0340.%20Longest%20Substring%20with%20At%20Most%20K%20Distinct%20Characters.h), []() )  
## 10. Two Pointers
[Camelcase Matching](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1023.%20Camelcase%20Matching) /[Expressive Words](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0809.%20Expressive%20Words.h) / [Interval List Intersections](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0986.%20Interval%20List%20Intersections.h) / [Shortest Way to Form String](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1055.%20Shortest%20Way%20to%20Form%20String.h)  
## 11. Array
[Find the Celebrity](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0277.%20Find%20the%20Celebrity.h)
## 12. String
i) find: [Repeated Substring Pattern](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0459.%20Repeated%20Substring%20Pattern.h)  
ii) other: [Greatest Common Divisor of Strings](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1071.%20Greatest%20Common%20Divisor%20of%20Strings.h)
iii) stringstream: [Serialize and Deserialize Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0297.%20Serialize%20and%20Deserialize%20Binary%20Tree.h)  
## 13. Linked list
[AddTwoNumbers](https://github.com/chbyang/Leetcode/blob/master/code/0002.%20AddTwoNumbers.h)
## 14. Tree
### a) Binary Tree
i) Recursive: [Balanced Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0110.%20Balanced%20Binary%20Tree.h) / [Longest Univalue Path](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0687.%20Longest%20Univalue%20Path.h) (Similar: [Binary Tree Maximum Path Sum](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0124.%20Binary%20Tree%20Maximum%20Path%20Sum.h) / [Distribute Coins in Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0979.%20Distribute%20Coins%20in%20Binary%20Tree.h)) / [Lowest Common Ancestor of a Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0236Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree.h) / [All Possible Full Binary Trees](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0894.%20All%20Possible%20Full%20Binary%20Trees.h) / [Serialize and Deserialize Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0297.%20Serialize%20and%20Deserialize%20Binary%20Tree.h)  
ii) Recursive+dfs: [Subtree of Another Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0572.%20Subtree%20of%20Another%20Tree.h) / [Path Sum III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0437.%20Path%20Sum%20III.h)  
iii) Iterative traversal: [Binary Tree Inorder Traversal](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0094.%20Binary%20Tree%20Inorder%20Traversal.h) (Similar: [Binary Tree Preorder](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0144.%20Binary%20Tree%20Preorder%20Traversal.h), [Binary Tree Postorder](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0145.%20Binary%20Tree%20Postorder%20Traversal.h), [Binary Tree Level Order II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0107.%20Binary%20Tree%20Level%20Order%20Traversal%20II.h), [Vertical Order Traversal of a Binary Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0987.%20Vertical%20Order%20Traversal%20of%20a%20Binary%20Tree.h), [N-ary Tree Postorder](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0590.%20N-ary%20Tree%20Postorder%20Traversal.h), [N-ary Tree Level Order](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0429.%20N-ary%20Tree%20Level%20Order%20Traversal.h)) / [Leaf-Similar Trees](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0872.%20Leaf-Similar%20Trees.h) / [Recover a Tree From Preorder Traversal](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1028.%20Recover%20a%20Tree%20From%20Preorder%20Traversal.h)  
iv) DP: [House Robber III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0337.%20House%20Robber%20III.h) / [Binary Tree Cameras](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0968.%20Binary%20Tree%20Cameras.h)
### b) Binary Search Tree
i) Find number: [Insert into a Binary Search Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0701.%20Insert%20into%20a%20Binary%20Search%20Tree.h) / [Delete Node in a BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0450.%20Delete%20Node%20in%20a%20BST.h)  
ii) Traversal: [Minimum Distance Between BST Nodes](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0783.%20Minimum%20Distance%20Between%20BST%20Nodes.h) (Similar: [Recover Binary Search Tree](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0099.%20Recover%20Binary%20Search%20Tree.h) / [Find Mode in BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0501.%20Find%20Mode%20in%20Binary%20Search%20Tree.h), [Validate BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0098.%20Validate%20Binary%20Search%20Tree.h), [Kth Smallest Element in a BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0230.%20Kth%20Smallest%20Element%20in%20a%20BST.h))  
iii) Range: [Lowest Common Ancestor of BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0235.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Search%20Tree.h) / [Validate BST](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0098.%20Validate%20Binary%20Search%20Tree.h) / [Convert BST to Sorted Doubly Linked List](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0426.%20Convert%20Binary%20Search%20Tree%20to%20Sorted%20Doubly%20Linked%20List.h)  
### c) Tire Tree
[Palindrome Pairs](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0336.%20Palindrome%20Pairs.h) / [Implement Trie (Prefix Tree)](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0208.%20Implement%20Trie%20(Prefix%20Tree).h) / [Stream of Characters](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1032.%20Stream%20of%20Characters.h) / [Prefix and Suffix Search](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0745.%20Prefix%20and%20Suffix%20Search.h) / [Repalce Words]()  
### d) Segment Tree
## 15. Stack / Queue / Priority_queue / Deque
i) Stack [Maximum Width Ramp](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0962.%20Maximum%20Width%20Ramp.h) / [Remove All Adjacent Duplicates In String](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1047.%20Remove%20All%20Adjacent%20Duplicates%20In%20String.h) / [Basic Calculator III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0772.%20Basic%20Calculator%20III.h)  

iii) Priority_queue [Last Stone Weight](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1046.%20Last%20Stone%20Weight.h)  
iv) Deque [Sliding Window Max](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0239.%20Sliding%20Window%20Maximum.h)  
## 16. Map / Unordered_map / Set / Unordered_set
[Longest Word in Dictionary](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0720.%20Longest%20Word%20in%20Dictionary.h) / [Flip Columns For Maximum Number of Equal Rows](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1072.%20Flip%20Columns%20For%20Maximum%20Number%20of%20Equal%20Rows.h)  
## 17. Graph
### a) Djikstra
[Template](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/template/Dijkstra.cpp) use priority queue in BFS rather than queue to integrate cost  
[Network Delay Time](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0743.%20Network%20Delay%20Time.h)  (Similar: [Cheapest Flights Within K Stops](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0787.%20Cheapest%20Flights%20Within%20K%20Stops.h))  
### b) Topological sort
indegree is similar to level in BFS: [Course Schedule I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0207.%20Course%20Schedule), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0210.%20Course%20Schedule%20II.h) / [Sequence Reconstruction](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0444.%20Sequence%20Reconstruction.h) / [Alien Dictionary](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0269.%20Alien%20Dictionary.h) / [Find Eventual Safe States](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0802.%20Find%20Eventual%20Safe%20States.h) / [Find the Town Judge](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0997.%20Find%20the%20Town%20Judge.h)  
## 18. Bit Manipulation
Count one [Counting Bits](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0338Counting%20Bits.h) (Similar: [Power of Four](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0342.%20Power%20of%20Four.h)) / [Sum of Two Integers](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0371.%20Sum%20of%20Two%20Integers.h) / ^ cancel digits [Single Number I](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0136.%20Single%20Number.h), [II](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0137.%20Single%20Number%20II.h), [III](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0260.%20Single%20Number%20III.h) (Similar: [Missing Number](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0268.%20Missing%20Number.h), [Find the Difference]()) / [Convert to Base -2](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1017.%20Convert%20to%20Base%20-2.h) / [Adding Two Negabinary Numbers](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1073.%20Adding%20Two%20Negabinary%20Numbers.h)  
Bitset [Binary String With Substrings Representing 1 To N](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1016.%20Binary%20String%20With%20Substrings%20Representing%201%20To%20N.h)  
https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary%3A-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently
## Sum
[Two Sum](https://github.com/chbyang/Leetcode/blob/master/code/0001.%20TwoSum.h) / [Number of Submatrices That Sum to Target](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.h)  
## Matrix
[Number of Submatrices That Sum to Target](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/1074.%20Number%20of%20Submatrices%20That%20Sum%20to%20Target.h) / [Range Sum Query 2D - Mutable](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0308.%20Range%20Sum%20Query%202D%20-%20Mutable.h), [- Immutable](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0304.%20Range%20Sum%20Query%202D%20-%20Immutable.h) /   
## Overlap
[Rectangle Area](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0223.%20Rectangle%20Area.h) (Similar: [Rectangle Overlap](https://github.com/chbyang/Leetcode-Templates-and-Examples/blob/master/code/0836.%20Rectangle%20Overlap))
