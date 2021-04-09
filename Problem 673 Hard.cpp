// This problem was asked by LinkedIn.

// Given a list of points, a central point, and an integer k, find the nearest k points from the central point.

// For example, given the list of points [(0, 0), (5, 4), (3, 1)], the central point (1, 2), and k = 2, return [(0, 0), (3, 1)].

// First take central point and calculate the distance and store that value as key and sort array based on key values and pop first k 
// values. Time Complexity O(klogn).