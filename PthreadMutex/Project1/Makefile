cc=g++
prom=T1
deps=dependence.h
obj=T1.o dependence.o

$(prom):$(obj)
	$(cc) -o $(prom) $(obj) -lpthread

%.o:%.c $(deps)
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)
