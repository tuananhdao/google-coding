if [ -z "$PROBLEM" ]
then
    problem=1
else
    problem=$PROBLEM
fi
g++ -o p$problem p$problem.cpp
./p1 < p$problem.txt
