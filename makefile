build : src/Main.cpp
run : bin/tazo
	./bin/tazo
bin/tazo : src/Main.cpp
	g++ src/Main.cpp -Iinclude -o bin/tazo

run : bin/tazo
	./bin/tazo
assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje