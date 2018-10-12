cc=g++
prom=TestVsprintf
src=$(shell find ./ -name "*.c")
obj=$(src:%.c=%.o)

$(prom):$(obj)
	$(cc) -o $(prom) $(obj)
%.o:%.c
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)
