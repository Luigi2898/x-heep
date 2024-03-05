#ifndef _MATMUL8_
#define _MATMUL8_
// This file is automatically generated
const int8_t m_a[] = {
-4,-2,-3,3,3,-1,-4,-3,1,-2,-2,2,-2,-4,-2,-1,
0,2,0,-2,-3,3,-2,3,-1,3,0,2,3,1,-3,-2,
0,2,2,3,-2,-2,-3,-2,0,-3,0,-4,2,-3,-3,1,
3,-4,1,1,-1,0,-3,0,1,3,-1,-2,2,3,-4,0,
3,-1,2,-4,-1,-2,0,-3,-3,0,-2,-4,-2,1,0,-2,
-3,0,-2,2,-1,2,2,2,3,1,0,-2,-1,-4,3,-3,
1,3,2,-3,-4,-3,-2,-1,-2,3,1,-3,2,-4,0,0,
-2,0,3,-1,3,-4,0,-2,2,3,-2,-2,-1,-4,-3,1,
-4,-2,-4,-1,-2,-4,-4,-2,-4,-4,-3,0,-2,-4,2,-4,
1,-1,-3,-2,-1,-2,-4,0,2,3,1,-3,-3,1,3,1,
-3,0,1,3,-3,1,3,2,0,-2,1,-4,-3,0,1,-4,
3,0,-1,-3,2,-1,-1,1,-1,3,2,-4,2,2,0,-2,
-4,2,2,-2,2,-4,-3,-3,-3,-3,-2,-3,3,0,3,0,
2,3,-2,0,3,1,1,-3,3,0,1,-4,-4,-1,0,1,
0,0,1,3,-3,3,3,1,-3,1,1,2,1,-2,-2,2,
-1,2,-2,1,0,-2,-3,-1,0,0,2,0,3,3,-4,-4,
};

const int8_t m_b[] = {
2,1,2,1,0,3,-1,-1,3,3,3,-2,0,-3,-1,3,
-3,0,-3,0,2,-2,3,0,-2,-1,2,-3,2,-2,0,-2,
-4,0,1,3,-3,-3,-2,2,3,0,-1,2,3,2,-2,-4,
3,3,-2,3,2,2,-2,-1,-3,-3,-1,-3,3,-2,2,-2,
0,1,0,-3,-1,-3,-1,0,-1,3,3,1,-1,-1,2,2,
-2,-4,-1,-1,1,1,2,-1,2,3,0,3,2,0,-4,3,
-1,-1,-3,2,-4,3,3,-1,3,1,-3,-2,1,1,2,3,
0,2,0,1,1,-3,-4,-4,2,-2,1,0,3,2,0,-1,
0,1,1,-1,2,-1,0,2,-1,-3,3,0,-2,-4,2,3,
1,-4,2,-4,0,1,3,-4,-2,-3,-2,-2,-1,3,-2,-3,
1,0,2,3,0,1,1,-1,-3,-1,3,-3,-3,-2,1,-4,
-3,2,-4,1,3,2,3,-2,1,1,3,0,-2,-2,-1,-1,
1,-3,-1,1,-2,2,-1,-4,3,0,-3,-4,-3,1,-1,2,
-1,-2,3,-4,0,1,1,1,-2,1,-4,3,0,1,2,1,
1,3,-1,-4,2,0,-1,-1,-4,-3,-2,-4,-1,-4,3,2,
0,1,0,1,3,-4,-1,2,1,-1,3,-2,-2,-2,-1,-1,
};

const int32_t m_exp[] = {
15,30,-21,1,25,-11,-8,24,-29,-1,32,23,-10,-15,9,-4,
-20,-44,1,-1,3,12,19,-41,25,4,-10,11,7,36,-44,-17,
13,10,3,50,-5,-17,-31,28,5,-12,9,-14,14,-3,-8,-28,
23,-31,50,-6,-12,14,-20,-5,19,6,-17,24,-4,29,-22,-1,
0,-17,35,-16,-40,5,-2,28,15,29,-28,27,10,27,-7,8,
15,8,-21,-5,6,6,0,-18,-23,-38,-11,-19,16,-8,16,14,
3,-18,14,16,-15,-9,1,-8,6,-23,-5,-36,-6,20,-27,-43,
-4,-1,9,3,-23,-39,-5,24,5,-13,15,6,-4,21,-3,-26,
20,35,-18,-6,6,3,-17,18,-28,-4,-14,16,-2,8,15,-4,
31,7,45,-49,28,-14,-8,10,-49,-31,11,-6,-24,-17,14,-3,
3,8,-5,21,-19,8,-10,8,-17,-23,-39,10,49,16,22,-9,
21,-30,44,-32,-25,5,-5,-22,-5,10,-12,-8,-15,19,1,8,
-7,8,-2,-18,-18,-38,-23,28,-20,-3,-29,-4,-9,9,17,-11,
10,4,11,-18,8,-13,16,34,-29,6,36,-5,0,-37,18,22,
-7,-13,-29,48,-2,22,13,-26,31,1,-8,-18,20,16,-30,-23,
8,-20,13,0,-5,20,10,-10,-22,2,-9,4,-12,14,6,-18,
};

#define SIZE 16
#endif