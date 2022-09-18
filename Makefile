target: main.o train.o bus.o cargo.o person.o
	g++ -o target main.o train.o bus.o cargo.o person.o

main.o: Main.cpp Train.h Bus.h Cargo.h Person.h Transporter.h
	g++ -c Main.cpp

train.o: Train.cpp Train.h Cargo.h Person.h Transporter.h
	g++ -c Train.cpp

bus.o: Bus.cpp Bus.h Cargo.h Person.h Transporter.h
	g++ -c Bus.cpp

cargo.o: Cargo.cpp Cargo.h
	g++ -c Cargo.cpp

person.o: Person.cpp Person.h
	g++ -c Person.cpp

transporter.o: Transporter.h

clean:
	rm *.o