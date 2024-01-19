from collections import *
arr = [1,2,3,2,2,4,6,5,3,5,3,2,2,1,4]
k=Counter(arr)
print('list of keys with values:\n',list(k.items()))
print('Most Common element with occurance:\n',list(k.most_common()[0]))
print('Most Common element is:',k.most_common()[0][0])
print('The Unique element is:',k.most_common()[-1][0])
print('Most Common element order wise:',k.most_common())
from statistics import *
print('Mean of Integers(Average):',mean(arr))
print('Mean of Float or int(Average):',fmean(arr))
print('Median(most centered element):',median(arr))
print('Median(most centered right element):',median_high([1,2,3,4]))
print('Median(most centered left element):',median_low([1,2,3,4]))
print('Mode(most repetive element):',mode(arr))
print('Standard Deviation:',stdev(arr))
print('Variance:',variance(arr))
# Suppose a car travels 10 km at 40 km/hr, 
# then another 10 km at 60 km/hr. 
# What is the average speed?
print('Aveg speed of two cars of same distance:',harmonic_mean([40, 60]))
# Suppose a car travels 40 km/hr for 5 km, 
# and when traffic clears, speeds-up to 60 km/hr 
# for the remaining 30 km of the journey. 
# What is the average speed?
print('Aveg speed of two cars of diff distance at diff time:',harmonic_mean([40, 60],[5, 30]))
print('Geometric-Mean(nth root of multiply of n val):',round(geometric_mean([54,24,36])))