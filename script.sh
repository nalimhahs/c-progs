#!/bin/bash

cc $1 > $"OP"
if [[ $OP == "" ]]; then
echo "1"
else
	./a.out
fi
