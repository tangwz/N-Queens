# N-Queens
N-Queens problem of multi-machine parallel solver.

1. 8 皇后问题在单机上的运算时间是毫秒级，有 92 个解，编程实现之（**注意：目前世界纪录是 N = 26，http://oeis.org/A000170**）；
2. 研究 N-皇后问题的并行算法，写一个单机多线程程序，争取达到线性加速比（以 CPU 核数计）。再设法将算法扩展到多机并行；
3. 用 10 台 8 核的机器（一共 80 个 CPU cores），求解 19-皇后和 20-皇后问题，看看分别需要多少运行时间。你的方案能否平滑扩展到更多的机器？
4. （*附加题）如果这 10 台机器的型号不一，有 8 核也有 16 核，有旧 CPU 也有更快的新 CPU，你该采用何种负载均衡策略，以求缩短求解问题的时间（至少比 plain round-robin 算法要好）？

可以使用 Amazon EC2 或 Google GCE 来验证你的程序的正确性和性能，这两家的虚拟机都是按小时（甚至更短）收费，开 10 台虚拟机做一个下午的实验也花不了多少钱。
