"""
Bubble sort and bogo sort, both terrible sorting algorithms
Implemented 2013.3.4 nbedford@marlboro.edu
"""
import random
import sys
import math

# Good functions to have:
def makelist(listlength): return [random.randint(1,1000) for i in [0]*listlength] # Fuck yeah list comprehension
def checksorted(inputlist): return all([inputlist[i] <= inputlist[i + 1] for i in xrange(len(inputlist) - 1)]) # "all" is "False not in"

def bubblesort(inputlist): # Takes an input list, returns the number of steps it took to sort it
    length = len(inputlist)
    finished = False
    count = 0
    while finished == False:
        finished = True
        for i in range(1,length):
            if inputlist[i-1] > inputlist[i]: #if the current element is less than the previous one
                inputlist[i-1],inputlist[i] = inputlist[i],inputlist[i - 1] #swap the elements
                finished = False
                count += 1 # add a step for every swap
            count += 1 #add a step for every check
    return inputlist,count

def bogosort(inputlist):
    count = 0
    while not checksorted(inputlist):
        random.shuffle(inputlist)
        count += 1 #Add a step for every try
    return inputlist,count

def main():
   print "n,steps"
   for size in xrange(1,100):
       steps = bogosort(makelist(size))[1]
       print "{},{}".format(size,steps)
       print size, ",", steps
if __name__=="__main__":
    main()
