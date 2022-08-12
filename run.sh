if [ -z "$PROBLEM" ]
then
    problem=1
else
    problem=$PROBLEM
fi
g++ -std=c++17 -o p$problem p$problem.cpp
./p$problem < p$problem.txt
