#1
a)     86, 1040
b)  3.02530e+01
c) 83.1620
d) 1e-06

#2
a) printf("%-8.1e",x)
b) printf("%10.6e",x)
c) printf("%-8.3f",x)
d) printf("%6.f",x)

#4
scanf("%d%f%d", &i, &x, &j);
where input:
10.3 5 6
i=10
x=0.300000
j=5

5 and 6 are interpreted as different ints

#5
scanf("%f%d%f", &i, &x, &j);
where inputs:
12.3 45.6 789
i=12.300000
x=45
j=0.600000

Remember that float is 6 sig by default
