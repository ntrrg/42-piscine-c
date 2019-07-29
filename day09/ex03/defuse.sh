#!/bin/sh

echo $(stat -f "%a" -t "%s" bomb.txt) - 1 | bc
