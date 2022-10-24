#!/bin/bash
RANDOM=$$
SIZE=10

for i in {1..7}
do
    FILE="${i}Random.txt"
    SIZE=$(($SIZE * 10))
    for w in `seq $SIZE`
    do
        echo $RANDOM >> $FILE
    done
done
