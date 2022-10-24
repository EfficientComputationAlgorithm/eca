#!/bin/bash

for i in {1..7}
do
    FILE="${i}Random.txt"
    for w in {1..10}
    do
        echo $i $w
        ./a.out ./$FILE
        sleep 1
    done
done
for w in {1..50}
do
    printf '\a'
    sleep 0.1
done
