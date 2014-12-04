#!/bin/bash

> gen.sh
cat combinations.txt | while read line
do
  echo "echo $line | tr ' ' '\n' | grep -v 'CC' | wc -l" >> gen.sh
done
