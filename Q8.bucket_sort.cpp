BUCKET SORT :-
ALGORITHM:-
Assuming we have array of n elements and k is no of buckets(range) we want
bucketSort(arr[], n,k)
Create k empty buckets (Or lists).
Do following for every array element arr[i].
      a) Insert arr[i] into bucket[k*array[i]]
        Sort individual buckets using insertion sort.
        Concatenate all sorted buckets.
TIME ANALYSIS:
  AVERAGE CASE:
    We have n elements and k bucket so average time spend at each bucket is
    (C(n/k)+C2) where c and c2 are implementation-specific constants. so
    total amount of time required =
    k( CO(n/k)+C2)=cn + c2k
    (assuming implementaion time is O(1) so)
    C=1 and C2=1
    so net avg time complexity of bucket sort is:-
    O(n+k)  where k is no of bucket
    WORST CASE:
    Worst case will occur when algo decides that every element belongs in the
    same bucket n that case, the linked list in that bucket needs to be traversed every time an element is added. That takes 1 step, then 2, then 3, 4, 5... n . Thusthe                      time is the sum of all of the numbers from 1 to n which is (n^2 + n)/2, which is O(n^2).
    hence total time complexity is O(n^2)
    BEST CASE:
    The best case time complexity of bucket sort is also same case as average case so time complexity is O(n+k)        
