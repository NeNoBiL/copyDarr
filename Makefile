all : main.o complete.o copy.o push.o realize.o
	g++ main.o complete.o copy.o push.o realize.o -o all -ldl -lpthread
main.o : main.cpp
	g++ -c -g main.cpp
complete.o : complete.cpp
	g++ -c -g complete.cpp
copy.o : copy.cpp
	g++ -c -g copy.cpp
push.o : push.cpp
	g++ -c -g push.cpp
realize.o: realize.cpp
	g++ -c -g realize.cpp
clean:
	del *.o 
	del *.exe
