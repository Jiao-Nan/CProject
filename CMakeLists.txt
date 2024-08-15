cmake_minimum_required(VERSION 3.22)
project(CProject C)

set(CMAKE_C_STANDARD 99)

add_executable(Linux_Test_1 Linux_Test_1.c)
add_executable(Linux_Test_2 Linux_Test_2.c)
add_executable(Test Test.c)
add_executable(Temp Temp.c)

#Ballclock
add_executable(ballclock Ballclock/linkqueue.c Ballclock/sqstack.c Ballclock/test.c)

#Build
add_executable(Callback Build/Callback.c)
add_executable(Longest_head Build/Longest_head.c)
add_executable(FunctionPointer Build/FunctionPointer.c)
add_executable(Pcond Build/Pcond.c)
add_executable(Snake Build/Snake.c)
add_executable(Fileinformation Build/Fileinformation.c)
add_executable(Open Build/Open.c)
add_executable(Time Build/Time.c)
add_executable(Library Build/Library.c)
add_executable(Prime_factors Build/Prime_factors.c)
add_executable(The_day Build/The_day.c)
add_executable(Find Build/Find.c)
add_executable(A Build/A.c)
add_executable(B Build/A.c Build/B.c)
add_executable(GCF Build/GCF.c)
add_executable(Acc Build/Acc.c)
add_executable(AddFactorial Build/AddFactorial.c)
add_executable(Sort Build/Sort.c)
add_executable(SaveCode Build/SaveCode.c)
add_executable(Print Build/Print.c)
add_executable(Pointer Build/Pointer.c)
add_executable(Array Build/Array.c)
add_executable(Factorial Build/Factorial.c)
add_executable(Function Build/Function.c)
add_executable(GuessNumber Build/GuessNumber.c)
add_executable(Leap_year Build/Leap_year.c)
add_executable(Love Build/Love.c)
add_executable(Multiplication Build/Multiplication.c)
add_executable(Password Build/Password.c)
add_executable(Swap Build/Swap.c)
add_executable(Hexadecimal Build/Hexadecimal.c)
add_executable(Girlfriends Build/Girlfriends.c)
add_executable(Quicksort  Build/Quicksort.c)

#Key
add_executable(readdir Key/readdir.c)
add_executable(qsort Key/qsort.c)
add_executable(struct Key/struct.c)
add_executable(switch Key/switch.c)
add_executable(strtol Key/strtol.c)
add_executable(continue Key/continue.c)
add_executable(EOF Key/EOF.c)
add_executable(enum Key/enum.c)
add_executable(if_else Key/if_else.c)
add_executable(strlen Key/strlen.c)
add_executable(while Key/while.c)
add_executable(static Key/static.c)
add_executable(getchar Key/getchar.c)
add_executable(time Key/time.c)
add_executable(shutdown Key/shutdown.c)
add_executable(strcpy Key/strcpy.c)
add_executable(memset Key/memset.c)
add_executable(printf Key/printf.c)
add_executable(memcpy Key/memcpy.c)

#Sqlist
add_executable(Sqlist Sqlist/sqlist.c  Sqlist/test.c)

#Linklist
add_executable(Linklist Linklist/linklist.c  Linklist/test.c)

#Sqstack
add_executable(Sqstack Sqstack/sqstack.c Sqstack/test.c)

#Linkstack
add_executable(Linkstack Linkstack/linkstack.c Linkstack/test.c)

#Sequeue
add_executable(Sequeue Sequeue/sequeue.c Sequeue/test.c)

#Linkqueue
add_executable(Linkqueue Linkqueue/linkqueue.c Linkqueue/test.c)

#Tree
add_executable(Tree Tree/tree.c Tree/test.c Tree/linkqueue.c)

#Hash
add_executable(Hash Hash/hash.c Hash/test.c)
