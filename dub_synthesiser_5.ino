//1024 values
short LOGPOTLOOKUP[]={
  0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 
  7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 
  14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 23, 
  23, 23, 23, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 28, 28, 28, 28, 29, 29, 29, 30, 30, 30, 31, 31, 31, 31, 32, 
  32, 32, 33, 33, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 36, 37, 37, 37, 37, 38, 38, 38, 39, 39, 39, 40, 40, 40, 41, 41, 41, 42, 
  42, 42, 42, 43, 43, 43, 44, 44, 44, 45, 45, 45, 46, 46, 46, 47, 47, 47, 48, 48, 48, 49, 49, 49, 50, 50, 50, 51, 51, 52, 52, 52, 
  53, 53, 53, 54, 54, 54, 55, 55, 55, 56, 56, 56, 57, 57, 57, 58, 58, 59, 59, 59, 60, 60, 60, 61, 61, 62, 62, 62, 63, 63, 63, 64, 
  64, 65, 65, 65, 66, 66, 66, 67, 67, 68, 68, 68, 69, 69, 69, 70, 70, 71, 71, 71, 72, 72, 73, 73, 73, 74, 74, 75, 75, 75, 76, 76, 
  77, 77, 77, 78, 78, 79, 79, 80, 80, 80, 81, 81, 82, 82, 82, 83, 83, 84, 84, 85, 85, 85, 86, 86, 87, 87, 88, 88, 89, 89, 89, 90, 
  90, 91, 91, 92, 92, 92, 93, 93, 94, 94, 95, 95, 96, 96, 97, 97, 97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103, 104, 104, 105, 
  105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 115, 115, 116, 116, 117, 117, 118, 118, 119, 119, 120, 120, 
  121, 121, 122, 123, 123, 124, 124, 125, 125, 126, 126, 127, 127, 128, 128, 129, 129, 130, 130, 131, 132, 132, 133, 133, 134, 134, 135, 135, 136, 137, 137, 138, 
  138, 139, 139, 140, 140, 141, 142, 142, 143, 143, 144, 144, 145, 146, 146, 147, 147, 148, 149, 149, 150, 150, 151, 152, 152, 153, 153, 154, 155, 155, 156, 156, 
  157, 158, 158, 159, 159, 160, 161, 161, 162, 162, 163, 164, 164, 165, 166, 166, 167, 167, 168, 169, 169, 170, 171, 171, 172, 173, 173, 174, 175, 175, 176, 177, 
  177, 178, 179, 179, 180, 181, 181, 182, 183, 183, 184, 185, 185, 186, 187, 187, 188, 189, 189, 190, 191, 191, 192, 193, 193, 194, 195, 196, 196, 197, 198, 198, 
  199, 200, 201, 201, 202, 203, 203, 204, 205, 206, 206, 207, 208, 209, 209, 210, 211, 212, 212, 213, 214, 215, 215, 216, 217, 218, 218, 219, 220, 221, 221, 222, 
  223, 224, 224, 225, 226, 227, 228, 228, 229, 230, 231, 232, 232, 233, 234, 235, 236, 236, 237, 238, 239, 240, 240, 241, 242, 243, 244, 245, 245, 246, 247, 248, 
  249, 250, 250, 251, 252, 253, 254, 255, 255, 256, 257, 258, 259, 260, 261, 261, 262, 263, 264, 265, 266, 267, 268, 269, 269, 270, 271, 272, 273, 274, 275, 276, 
  277, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 
  307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 
  340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 364, 365, 366, 367, 368, 369, 370, 372, 373, 374, 
  375, 376, 377, 378, 380, 381, 382, 383, 384, 385, 387, 388, 389, 390, 391, 393, 394, 395, 396, 397, 399, 400, 401, 402, 404, 405, 406, 407, 408, 410, 411, 412, 
  413, 415, 416, 417, 418, 420, 421, 422, 424, 425, 426, 427, 429, 430, 431, 433, 434, 435, 436, 438, 439, 440, 442, 443, 444, 446, 447, 448, 450, 451, 452, 454, 
  455, 456, 458, 459, 460, 462, 463, 465, 466, 467, 469, 470, 471, 473, 474, 476, 477, 479, 480, 481, 483, 484, 486, 487, 488, 490, 491, 493, 494, 496, 497, 499, 
  500, 502, 503, 504, 506, 507, 509, 510, 512, 513, 515, 516, 518, 519, 521, 522, 524, 526, 527, 529, 530, 532, 533, 535, 536, 538, 539, 541, 543, 544, 546, 547, 
  549, 550, 552, 554, 555, 557, 558, 560, 562, 563, 565, 567, 568, 570, 572, 573, 575, 576, 578, 580, 581, 583, 585, 586, 588, 590, 592, 593, 595, 597, 598, 600, 
  602, 603, 605, 607, 609, 610, 612, 614, 616, 617, 619, 621, 623, 624, 626, 628, 630, 632, 633, 635, 637, 639, 641, 642, 644, 646, 648, 650, 652, 653, 655, 657, 
  659, 661, 663, 665, 667, 668, 670, 672, 674, 676, 678, 680, 682, 684, 686, 687, 689, 691, 693, 695, 697, 699, 701, 703, 705, 707, 709, 711, 713, 715, 717, 719, 
  721, 723, 725, 727, 729, 731, 733, 735, 737, 739, 741, 744, 746, 748, 750, 752, 754, 756, 758, 760, 762, 765, 767, 769, 771, 773, 775, 777, 780, 782, 784, 786, 
  788, 790, 793, 795, 797, 799, 801, 804, 806, 808, 810, 813, 815, 817, 819, 822, 824, 826, 828, 831, 833, 835, 838, 840, 842, 845, 847, 849, 852, 854, 856, 859, 
  861, 863, 866, 868, 871, 873, 875, 878, 880, 883, 885, 887, 890, 892, 895, 897, 900, 902, 905, 907, 910, 912, 915, 917, 920, 922, 925, 927, 930, 932, 935, 937, 
  940, 942, 945, 948, 950, 953, 955, 958, 961, 963, 966, 968, 971, 974, 976, 979, 982, 984, 987, 990, 992, 995, 998, 1001, 1003, 1006, 1009, 1011, 1014, 1017, 1020, 1022
};

//882 values - 50Hz (at 44.1kHz sample rate)
int SINLOOKUPSIZE=882;
short SINLOOKUP[]={
  2047, 2062, 2076, 2091, 2105, 2120, 2134, 2149, 2164, 2178, 2193, 2207, 2222, 2236, 2251, 2265, 2280, 2294, 2309, 2323, 2338, 2352, 2367, 2381, 2395, 2410, 2424, 2438, 2453, 2467, 2481, 2495, 
  2510, 2524, 2538, 2552, 2566, 2580, 2595, 2609, 2623, 2637, 2651, 2664, 2678, 2692, 2706, 2720, 2734, 2747, 2761, 2775, 2788, 2802, 2815, 2829, 2842, 2856, 2869, 2882, 2896, 2909, 2922, 2935, 
  2948, 2962, 2975, 2988, 3001, 3013, 3026, 3039, 3052, 3064, 3077, 3090, 3102, 3115, 3127, 3139, 3152, 3164, 3176, 3188, 3200, 3212, 3224, 3236, 3248, 3260, 3272, 3283, 3295, 3306, 3318, 3329, 
  3341, 3352, 3363, 3374, 3385, 3396, 3407, 3418, 3429, 3440, 3450, 3461, 3471, 3482, 3492, 3503, 3513, 3523, 3533, 3543, 3553, 3563, 3572, 3582, 3592, 3601, 3611, 3620, 3629, 3639, 3648, 3657, 
  3666, 3675, 3684, 3692, 3701, 3709, 3718, 3726, 3735, 3743, 3751, 3759, 3767, 3775, 3783, 3790, 3798, 3805, 3813, 3820, 3827, 3835, 3842, 3849, 3856, 3862, 3869, 3876, 3882, 3889, 3895, 3901, 
  3907, 3913, 3919, 3925, 3931, 3937, 3942, 3948, 3953, 3958, 3963, 3969, 3974, 3978, 3983, 3988, 3992, 3997, 4001, 4006, 4010, 4014, 4018, 4022, 4026, 4029, 4033, 4036, 4040, 4043, 4046, 4049, 
  4052, 4055, 4058, 4061, 4063, 4066, 4068, 4071, 4073, 4075, 4077, 4079, 4080, 4082, 4084, 4085, 4086, 4088, 4089, 4090, 4091, 4092, 4092, 4093, 4093, 4094, 4094, 4094, 4094, 4094, 4094, 4094, 
  4094, 4093, 4093, 4092, 4092, 4091, 4090, 4089, 4088, 4086, 4085, 4084, 4082, 4080, 4079, 4077, 4075, 4073, 4071, 4068, 4066, 4063, 4061, 4058, 4055, 4052, 4049, 4046, 4043, 4040, 4036, 4033, 
  4029, 4026, 4022, 4018, 4014, 4010, 4006, 4001, 3997, 3992, 3988, 3983, 3978, 3974, 3969, 3963, 3958, 3953, 3948, 3942, 3937, 3931, 3925, 3919, 3913, 3907, 3901, 3895, 3889, 3882, 3876, 3869, 
  3862, 3856, 3849, 3842, 3835, 3827, 3820, 3813, 3805, 3798, 3790, 3783, 3775, 3767, 3759, 3751, 3743, 3735, 3726, 3718, 3709, 3701, 3692, 3684, 3675, 3666, 3657, 3648, 3639, 3629, 3620, 3611, 
  3601, 3592, 3582, 3572, 3563, 3553, 3543, 3533, 3523, 3513, 3503, 3492, 3482, 3471, 3461, 3450, 3440, 3429, 3418, 3407, 3396, 3385, 3374, 3363, 3352, 3341, 3329, 3318, 3306, 3295, 3283, 3272, 
  3260, 3248, 3236, 3224, 3212, 3200, 3188, 3176, 3164, 3152, 3139, 3127, 3115, 3102, 3090, 3077, 3064, 3052, 3039, 3026, 3013, 3001, 2988, 2975, 2962, 2948, 2935, 2922, 2909, 2896, 2882, 2869, 
  2856, 2842, 2829, 2815, 2802, 2788, 2775, 2761, 2747, 2734, 2720, 2706, 2692, 2678, 2664, 2651, 2637, 2623, 2609, 2595, 2580, 2566, 2552, 2538, 2524, 2510, 2495, 2481, 2467, 2453, 2438, 2424, 
  2410, 2395, 2381, 2367, 2352, 2338, 2323, 2309, 2294, 2280, 2265, 2251, 2236, 2222, 2207, 2193, 2178, 2164, 2149, 2134, 2120, 2105, 2091, 2076, 2062, 2047, 2032, 2018, 2003, 1989, 1974, 1960, 
  1945, 1930, 1916, 1901, 1887, 1872, 1858, 1843, 1829, 1814, 1800, 1785, 1771, 1756, 1742, 1727, 1713, 1699, 1684, 1670, 1656, 1641, 1627, 1613, 1599, 1584, 1570, 1556, 1542, 1528, 1514, 1499, 
  1485, 1471, 1457, 1443, 1430, 1416, 1402, 1388, 1374, 1360, 1347, 1333, 1319, 1306, 1292, 1279, 1265, 1252, 1238, 1225, 1212, 1198, 1185, 1172, 1159, 1146, 1132, 1119, 1106, 1093, 1081, 1068, 
  1055, 1042, 1030, 1017, 1004, 992, 979, 967, 955, 942, 930, 918, 906, 894, 882, 870, 858, 846, 834, 822, 811, 799, 788, 776, 765, 753, 742, 731, 720, 709, 698, 687, 
  676, 665, 654, 644, 633, 623, 612, 602, 591, 581, 571, 561, 551, 541, 531, 522, 512, 502, 493, 483, 474, 465, 455, 446, 437, 428, 419, 410, 402, 393, 385, 376, 
  368, 359, 351, 343, 335, 327, 319, 311, 304, 296, 289, 281, 274, 267, 259, 252, 245, 238, 232, 225, 218, 212, 205, 199, 193, 187, 181, 175, 169, 163, 157, 152, 
  146, 141, 136, 131, 125, 120, 116, 111, 106, 102, 97, 93, 88, 84, 80, 76, 72, 68, 65, 61, 58, 54, 51, 48, 45, 42, 39, 36, 33, 31, 28, 26, 
  23, 21, 19, 17, 15, 14, 12, 10, 9, 8, 6, 5, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 
  5, 6, 8, 9, 10, 12, 14, 15, 17, 19, 21, 23, 26, 28, 31, 33, 36, 39, 42, 45, 48, 51, 54, 58, 61, 65, 68, 72, 76, 80, 84, 88, 
  93, 97, 102, 106, 111, 116, 120, 125, 131, 136, 141, 146, 152, 157, 163, 169, 175, 181, 187, 193, 199, 205, 212, 218, 225, 232, 238, 245, 252, 259, 267, 274, 
  281, 289, 296, 304, 311, 319, 327, 335, 343, 351, 359, 368, 376, 385, 393, 402, 410, 419, 428, 437, 446, 455, 465, 474, 483, 493, 502, 512, 522, 531, 541, 551, 
  561, 571, 581, 591, 602, 612, 623, 633, 644, 654, 665, 676, 687, 698, 709, 720, 731, 742, 753, 765, 776, 788, 799, 811, 822, 834, 846, 858, 870, 882, 894, 906, 
  918, 930, 942, 955, 967, 979, 992, 1004, 1017, 1030, 1042, 1055, 1068, 1081, 1093, 1106, 1119, 1132, 1146, 1159, 1172, 1185, 1198, 1212, 1225, 1238, 1252, 1265, 1279, 1292, 1306, 1319, 
  1333, 1347, 1360, 1374, 1388, 1402, 1416, 1430, 1443, 1457, 1471, 1485, 1499, 1514, 1528, 1542, 1556, 1570, 1584, 1599, 1613, 1627, 1641, 1656, 1670, 1684, 1699, 1713, 1727, 1742, 1756, 1771, 
  1785, 1800, 1814, 1829, 1843, 1858, 1872, 1887, 1901, 1916, 1930, 1945, 1960, 1974, 1989, 2003, 2018, 2032
};

int SAWLOOKUPSIZE=882;  //both lookups a bit unnecessary, but what the hell.
short SAWLOOKUP[]={ 
  4095, 4090, 4085, 4081, 4076, 4071, 4067, 4062, 4057, 4053, 4048, 4043, 4039, 4034, 4029, 4025, 4020, 4015, 4011, 4006, 4002, 3997, 3992, 3988, 3983, 3978, 3974, 3969, 3964, 3960, 3955, 3950, 
  3946, 3941, 3936, 3932, 3927, 3923, 3918, 3913, 3909, 3904, 3899, 3895, 3890, 3885, 3881, 3876, 3871, 3867, 3862, 3857, 3853, 3848, 3844, 3839, 3834, 3830, 3825, 3820, 3816, 3811, 3806, 3802, 
  3797, 3792, 3788, 3783, 3778, 3774, 3769, 3764, 3760, 3755, 3751, 3746, 3741, 3737, 3732, 3727, 3723, 3718, 3713, 3709, 3704, 3699, 3695, 3690, 3685, 3681, 3676, 3672, 3667, 3662, 3658, 3653, 
  3648, 3644, 3639, 3634, 3630, 3625, 3620, 3616, 3611, 3606, 3602, 3597, 3593, 3588, 3583, 3579, 3574, 3569, 3565, 3560, 3555, 3551, 3546, 3541, 3537, 3532, 3527, 3523, 3518, 3513, 3509, 3504, 
  3500, 3495, 3490, 3486, 3481, 3476, 3472, 3467, 3462, 3458, 3453, 3448, 3444, 3439, 3434, 3430, 3425, 3421, 3416, 3411, 3407, 3402, 3397, 3393, 3388, 3383, 3379, 3374, 3369, 3365, 3360, 3355, 
  3351, 3346, 3342, 3337, 3332, 3328, 3323, 3318, 3314, 3309, 3304, 3300, 3295, 3290, 3286, 3281, 3276, 3272, 3267, 3262, 3258, 3253, 3249, 3244, 3239, 3235, 3230, 3225, 3221, 3216, 3211, 3207, 
  3202, 3197, 3193, 3188, 3183, 3179, 3174, 3170, 3165, 3160, 3156, 3151, 3146, 3142, 3137, 3132, 3128, 3123, 3118, 3114, 3109, 3104, 3100, 3095, 3091, 3086, 3081, 3077, 3072, 3067, 3063, 3058, 
  3053, 3049, 3044, 3039, 3035, 3030, 3025, 3021, 3016, 3011, 3007, 3002, 2998, 2993, 2988, 2984, 2979, 2974, 2970, 2965, 2960, 2956, 2951, 2946, 2942, 2937, 2932, 2928, 2923, 2919, 2914, 2909, 
  2905, 2900, 2895, 2891, 2886, 2881, 2877, 2872, 2867, 2863, 2858, 2853, 2849, 2844, 2840, 2835, 2830, 2826, 2821, 2816, 2812, 2807, 2802, 2798, 2793, 2788, 2784, 2779, 2774, 2770, 2765, 2760, 
  2756, 2751, 2747, 2742, 2737, 2733, 2728, 2723, 2719, 2714, 2709, 2705, 2700, 2695, 2691, 2686, 2681, 2677, 2672, 2668, 2663, 2658, 2654, 2649, 2644, 2640, 2635, 2630, 2626, 2621, 2616, 2612, 
  2607, 2602, 2598, 2593, 2589, 2584, 2579, 2575, 2570, 2565, 2561, 2556, 2551, 2547, 2542, 2537, 2533, 2528, 2523, 2519, 2514, 2509, 2505, 2500, 2496, 2491, 2486, 2482, 2477, 2472, 2468, 2463, 
  2458, 2454, 2449, 2444, 2440, 2435, 2430, 2426, 2421, 2417, 2412, 2407, 2403, 2398, 2393, 2389, 2384, 2379, 2375, 2370, 2365, 2361, 2356, 2351, 2347, 2342, 2338, 2333, 2328, 2324, 2319, 2314, 
  2310, 2305, 2300, 2296, 2291, 2286, 2282, 2277, 2272, 2268, 2263, 2258, 2254, 2249, 2245, 2240, 2235, 2231, 2226, 2221, 2217, 2212, 2207, 2203, 2198, 2193, 2189, 2184, 2179, 2175, 2170, 2166, 
  2161, 2156, 2152, 2147, 2142, 2138, 2133, 2128, 2124, 2119, 2114, 2110, 2105, 2100, 2096, 2091, 2087, 2082, 2077, 2073, 2068, 2063, 2059, 2054, 2049, 2045, 2040, 2035, 2031, 2026, 2021, 2017, 
  2012, 2007, 2003, 1998, 1994, 1989, 1984, 1980, 1975, 1970, 1966, 1961, 1956, 1952, 1947, 1942, 1938, 1933, 1928, 1924, 1919, 1915, 1910, 1905, 1901, 1896, 1891, 1887, 1882, 1877, 1873, 1868, 
  1863, 1859, 1854, 1849, 1845, 1840, 1836, 1831, 1826, 1822, 1817, 1812, 1808, 1803, 1798, 1794, 1789, 1784, 1780, 1775, 1770, 1766, 1761, 1756, 1752, 1747, 1743, 1738, 1733, 1729, 1724, 1719, 
  1715, 1710, 1705, 1701, 1696, 1691, 1687, 1682, 1677, 1673, 1668, 1664, 1659, 1654, 1650, 1645, 1640, 1636, 1631, 1626, 1622, 1617, 1612, 1608, 1603, 1598, 1594, 1589, 1585, 1580, 1575, 1571, 
  1566, 1561, 1557, 1552, 1547, 1543, 1538, 1533, 1529, 1524, 1519, 1515, 1510, 1505, 1501, 1496, 1492, 1487, 1482, 1478, 1473, 1468, 1464, 1459, 1454, 1450, 1445, 1440, 1436, 1431, 1426, 1422, 
  1417, 1413, 1408, 1403, 1399, 1394, 1389, 1385, 1380, 1375, 1371, 1366, 1361, 1357, 1352, 1347, 1343, 1338, 1334, 1329, 1324, 1320, 1315, 1310, 1306, 1301, 1296, 1292, 1287, 1282, 1278, 1273, 
  1268, 1264, 1259, 1254, 1250, 1245, 1241, 1236, 1231, 1227, 1222, 1217, 1213, 1208, 1203, 1199, 1194, 1189, 1185, 1180, 1175, 1171, 1166, 1162, 1157, 1152, 1148, 1143, 1138, 1134, 1129, 1124, 
  1120, 1115, 1110, 1106, 1101, 1096, 1092, 1087, 1083, 1078, 1073, 1069, 1064, 1059, 1055, 1050, 1045, 1041, 1036, 1031, 1027, 1022, 1017, 1013, 1008, 1003, 999, 994, 990, 985, 980, 976, 
  971, 966, 962, 957, 952, 948, 943, 938, 934, 929, 924, 920, 915, 911, 906, 901, 897, 892, 887, 883, 878, 873, 869, 864, 859, 855, 850, 845, 841, 836, 832, 827, 
  822, 818, 813, 808, 804, 799, 794, 790, 785, 780, 776, 771, 766, 762, 757, 752, 748, 743, 739, 734, 729, 725, 720, 715, 711, 706, 701, 697, 692, 687, 683, 678, 
  673, 669, 664, 660, 655, 650, 646, 641, 636, 632, 627, 622, 618, 613, 608, 604, 599, 594, 590, 585, 581, 576, 571, 567, 562, 557, 553, 548, 543, 539, 534, 529, 
  525, 520, 515, 511, 506, 501, 497, 492, 488, 483, 478, 474, 469, 464, 460, 455, 450, 446, 441, 436, 432, 427, 422, 418, 413, 409, 404, 399, 395, 390, 385, 381, 
  376, 371, 367, 362, 357, 353, 348, 343, 339, 334, 330, 325, 320, 316, 311, 306, 302, 297, 292, 288, 283, 278, 274, 269, 264, 260, 255, 250, 246, 241, 237, 232, 
  227, 223, 218, 213, 209, 204, 199, 195, 190, 185, 181, 176, 171, 167, 162, 158, 153, 148, 144, 139, 134, 130, 125, 120, 116, 111, 106, 102, 97, 92, 88, 83, 
  79, 74, 69, 65, 60, 55, 51, 46, 41, 37, 32, 27, 23, 18, 13, 9, 4, 0
};

#define SAMPLE_RATE 44100.0
#define TICKS_PER_CYCLE (4294967296.0/SAMPLE_RATE)

#define BIAS 2048

#define LEDPIN 53

int POT0=0,POT1=0,POT2=0,POT3=0;
int64_t iter=0; 
int64_t modIter=0; 
int out_DAC0;

const int BUTTONS[]={8,9,11,10,13,12};             //main trigger, drop trigger; mod sine on, mod saw on (else square); main sine on, main saw on (else square)
unsigned int BUTTONSTATES[]={0,0,0,0,0,0};

#define FADEMAX 512    //512 samples attack and release (sustain always 1)
unsigned int FADE=0;    //used in ASR

#define MAXDELAYBUFFERSIZE 44100  //1 second of delay
short DELAYBUFFER[MAXDELAYBUFFERSIZE];
unsigned int delayWriteIndex=0; 
unsigned int pDelayWriteIndex=0;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

void setup()
{
  Serial.begin(9600);
  /* turn on the timer clock in the power management controller */
  pmc_set_writeprotect(false);
  pmc_enable_periph_clk(ID_TC4);
  /* we want wavesel 01 with RC */
  TC_Configure(/* clock */TC1,/* channel */1, TC_CMR_WAVE | TC_CMR_WAVSEL_UP_RC | TC_CMR_TCCLKS_TIMER_CLOCK2);
  TC_SetRC(TC1, 1, 238); // sets <> 44.1 Khz interrupt rate
  TC_Start(TC1, 1);
  TC1->TC_CHANNEL[1].TC_IER=TC_IER_CPCS;
  TC1->TC_CHANNEL[1].TC_IDR=~TC_IER_CPCS;
  NVIC_EnableIRQ(TC4_IRQn);
  
  analogWrite(DAC0,0);
 
  pinMode(LEDPIN,OUTPUT);
  
  for(int i=0;i<6;i++){
    pinMode(BUTTONS[i],INPUT_PULLUP);  //begin button pins
  }
  
  for(int i=0;i<MAXDELAYBUFFERSIZE;i++){
    DELAYBUFFER[i]=BIAS; //initialise delay buffer to 'zero'
  }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

void loop()
{
  
  POT0 = LOGPOTLOOKUP[analogRead(A1)];  //frequency
  POT1 = LOGPOTLOOKUP[analogRead(A3)];  //mod frequency
  POT2 = analogRead(A0);  //delay  
  POT3 = analogRead(A2);  //feedback
  
//  Serial.print(POT0);
//  Serial.print("\t");
//  Serial.print(POT1);
//  Serial.print("\t") ;
//  Serial.print(POT2);
//  Serial.print("\t") ;
//  Serial.println(POT3);
  
  Serial.println(delayWriteIndex);
  
  if((delayWriteIndex<(22050<<16))||(POT2==0)){
    digitalWrite(LEDPIN,HIGH);
  }else{
    digitalWrite(LEDPIN,LOW);
  }
  //get button states
  buttonUpdate();
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

void TC4_Handler()
{
  // We need to get the status to clear it and allow the interrupt to fire again
  TC_GetStatus(TC1, 1);
  
  //need multiple waveforms (with a trigger and mod sync button),modulation (also multiple waveforms) and delay (tape/glitch style)
  
  //'drop' condition-------------------------------------------------------------------------------
  if(BUTTONSTATES[1]==2){
    modIter=0;
  }
  
  if((BUTTONSTATES[0]==2)||(FADE>0)){
    //modulation --------------------------------------------------------------------------------
    int modval=0;
    modIter+=POT1<<5;                    //mod rate: tweak as necessary
    if(BUTTONSTATES[2]==2){
      modIter%=SINLOOKUPSIZE<<16;    
      modval=getBufInterp(SINLOOKUP,SINLOOKUPSIZE,modIter);   
    }else if(BUTTONSTATES[3]==2){
      modIter%=SAWLOOKUPSIZE<<16;    
      modval=getBufInterp(SAWLOOKUP,SAWLOOKUPSIZE,modIter);  
    }else{
      modIter%=SINLOOKUPSIZE<<16;     
      modval=getBufInterp(SINLOOKUP,SINLOOKUPSIZE,modIter); 
      if(modval<2047){      //square wave
        modval=1;
      }else{
        modval=4094;
      }
    }
    modval=(modval<<5);   //mod amount, currently 1 octave
    
    //main osc--------------------------------------------------------------------------------
    iter+=(POT0<<12)+modval; 
    if(BUTTONSTATES[4]==2){
      iter%=SINLOOKUPSIZE<<16;     
      out_DAC0=getBufInterp(SINLOOKUP,SINLOOKUPSIZE,iter);  
    }else if(BUTTONSTATES[5]==2){
      iter%=SAWLOOKUPSIZE<<16;     
      out_DAC0=getBufInterp(SAWLOOKUP,SAWLOOKUPSIZE,iter);  
    }else{
      iter%=SINLOOKUPSIZE<<16;     
      out_DAC0=getBufInterp(SINLOOKUP,SINLOOKUPSIZE,iter); 
      if(out_DAC0<2047){      //square wave
        out_DAC0=1;
      }else{
        out_DAC0=4094;
      }
    }

    //ASR--------------------------------------------------------------------------------------
    if((FADE<FADEMAX)&&(BUTTONSTATES[0]==2)){
      FADE++;
    }else{
      FADE--;
    }
    out_DAC0=volumeMult4096(out_DAC0,FADE<<7);                                 //output volume set at 100% (FADE<<6 instead of FADE<<7 would be 50%)
    
  }else{
    out_DAC0=BIAS;
  }
  
  //delay,feedback,filtering-----------
  pDelayWriteIndex=delayWriteIndex;                                                             //store the previous index (for filling in the gaps later)
  delayWriteIndex+=POT2<<9;                                                                     //increase the index by the specified amount, to the 'oldest' sample (should be from a nice lookup)
  
  //crappy filtering - take a equal mix of current and last sample (2 tap rectangular moving average filter - good for high frequency clicks but not very noticeable otherwise)
  int oldsample=volumeMix4096(getBufInterp(DELAYBUFFER,MAXDELAYBUFFERSIZE,delayWriteIndex),getBufInterp(DELAYBUFFER,MAXDELAYBUFFERSIZE,pDelayWriteIndex),32768); //read oldest sample
  
  oldsample=volumeMult4096(oldsample,((POT3*3)>>1)<<6);  //multiply feedback amount (to 150%)
  
  out_DAC0=volumeAdd4096(oldsample,out_DAC0);       //add the oldest sample to the output
  
  //DELAYBUFFER[delayWriteIndex>>16]=out_DAC0;                                                           //cop out, but sounds so lovely and crunchy. Instead:
  for(unsigned int i=(pDelayWriteIndex>>16);i<(delayWriteIndex>>16);i++){
    int index=i%MAXDELAYBUFFERSIZE;
    DELAYBUFFER[index]=out_DAC0; //write all samples the same! this loop could get messy in short delays (bigger jumps, longer runs to fill);
  }
    
  delayWriteIndex%=MAXDELAYBUFFERSIZE<<16;                                                      //limit the index so it's always within the array
  
  dacc_write_conversion_data(DACC_INTERFACE, out_DAC0);
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int getBufInterp(short int* ARRAYINPUT, int BUFFSIZE, unsigned int INDEX){
  //INDEX should be float bufferPosition * 2^16
  //linear interpolation - allows you to ask for an array entry between indexes e.g. getValInterp(listOfValues, 1024, 34.7*(2^16)); will return a proportional mix of the values at indexes 34 and 35
  //will loop back at the end of the array, e.g. it's possible to request indexes longer than the input
  int LOWER  = INDEX>>16;
  if((INDEX%65536)==0){
    return (ARRAYINPUT[LOWER%BUFFSIZE]);
  }else{
    return linInterp(ARRAYINPUT[LOWER%BUFFSIZE], ARRAYINPUT[(LOWER+1)%BUFFSIZE], INDEX%65536);
  }
}
//SETBUFINTERP?

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int linInterp(int IN1, int IN2, int WEIGHT){
  return (IN1*(65536-WEIGHT) + IN2*WEIGHT)>>16;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int volumeMult4096(int INPUTSAMPLE,int VOLFACTOR){
  //simple linear volume change (clips over 1) 
  //INPUTSAMPLE is between 0 and 4095
  //VOLFACTOR is equal to 2^16F, e.g. a doubling of volume would be 2^16*2 = 131072, assumes bias of 2048
  return constrain((((INPUTSAMPLE-BIAS)*VOLFACTOR)>>16)+BIAS,0,4095);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int volumeMix4096(int INPUTSAMPLE1,int INPUTSAMPLE2,int MIX){
  //simple volume mixer for two samples, contrains to 4095, variable mix of two samples, MIX should be expressed x*(2^16) where x is between 0 and 1.
  return constrain((INPUTSAMPLE1*(65536-MIX)+INPUTSAMPLE2*MIX)>>16,0,4095);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------

int volumeAdd4096(int INPUTSAMPLE1,int INPUTSAMPLE2){   //beware unsigned
  //simple volume adder for two samples, contrains to 4095, assumes bias of 2048
  return constrain(INPUTSAMPLE1+INPUTSAMPLE2-BIAS,0,4095);
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------

void buttonUpdate(){
  for(int i=0;i<6;i++){
    boolean buttonState=digitalRead(BUTTONS[i]);
    if(BUTTONSTATES[i]==3){
      BUTTONSTATES[i]=2;
    }
    if((buttonState==LOW)&&(BUTTONSTATES[i]==0)){
      BUTTONSTATES[i]=3;
    }
    if(BUTTONSTATES[i]==1){
      BUTTONSTATES[i]=0;
    }
    if((buttonState==HIGH)&&(BUTTONSTATES[i]==2)){
      BUTTONSTATES[i]=1;
    }
  }
}

