#!/bin/bash
echo "Enter a number:"
read n
fact=1
for (( i=1; i<=n; i++ ))
do
fact=$((fact * i))
done
echo "Factorial of $n is $fact"
echo $a
echo $b
for (( i=2; i<n; i++ ))
do
c=$((a + b))
echo $c
a=$b
b=$c
done
