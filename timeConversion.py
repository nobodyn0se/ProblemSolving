#!/bin/python3

import os
import sys
from datetime import date, time, datetime, timedelta  

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #
    h = datetime.strptime(s,'%I:%M:%S%p').strftime('%H:%M:%S')
    
    return h

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
