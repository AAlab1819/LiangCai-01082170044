# Find the Running Median ([Problem](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem))
Find the median every input. This can be achieved using standard sort but someone forced me to use this "AMAZING" heap thingy.\
Considering you already have `heapify` function ready, follow me on this.
1. For loop `n` times.
2. Append current input to vector `num_list`
3. Heapify `num_list`
4. Assign reverse-heap-sorted `num_list` to `median_list`
5. Find median from `median_list` (this includes the output)

Worst Case Complexity: `O(n logn)`

# Roy and Trending Topics ([Problem](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/description/))
Find top 5 treding topic based on difference in 'z-score' and highest topic id gets prioritized. As usual, we can use standard sort, but heap sort amirite?\
First, we have to make a struct `Topic` consisting of 4 types: int `topic_id`, long long int `old_z`, long long int `new_z`, and long long int `difference`\
Make a map of <long long int,vector(Topic),greater(long long int)> called `separator`. This is for keep track of the same difference topic IDs and we can heap sort the topics from there.\
Take care of inputs as usual: `n` is for amount of inputs, `id, z, p, l, c, s` is for Topic ID, current z-score - Z, Posts - P, Likes - L, Comments - C, Shares - S, and `new_topic` to be used later on.
```
Loop n times:
  new_topic.topic_id = id
  new_topic.topic_id = id;
  new_topic.old_z = z;
  new_topic.new_z = (p*50LL) + (l*5LL) + (c*10LL) + (s*20LL); //LL is because the data type of difference is long long
  new_topic.difference = new_topic.new_z - new_topic.old_z;
  insert 'new_topic' to map with 'new_topic.difference' as the key
```
When we are done populating the map, we can "reverse_heap_sort" each vector of Topics in the map.\
Then we can output the top five starting from the highest difference in the map.

Worst Case Complexity: `O(n logn)`
