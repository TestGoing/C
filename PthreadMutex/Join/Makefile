cc=g++
prom=Join
src=$(shell find ./ -name "*.c")
obj=$(src:%.c=%.o)

$(prom):$(obj)
	$(cc) -o $(prom) $(obj) -lpthread
%.o:%.c
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)