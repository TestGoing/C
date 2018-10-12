cc=g++
prom=T1
deps=dependence.h
obj=T1.o dependence.o

$(prom):$(obj)
	$(cc) -o $(prom) $(obj) -lpthread

T1.o:T1.c $(deps)
	$(cc) -c T1.c
dependence.o:$(dependence.c)
	$(cc) -c dependence.c

