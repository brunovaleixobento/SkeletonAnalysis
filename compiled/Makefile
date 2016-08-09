
all: plotVar printYield

plotVar:
	g++ plotVar.cc -std=c++11 -I `root-config --incdir` -L. `root-config --libs` -o plotVar

printYield:
	g++ printYield.cc -std=c++11 -I `root-config --incdir` -L. `root-config --libs` -o printYield

clean:
	(rm plotVar printYield)


#cd ./scanner
#g++ main.cc -std=c++11 -o scanner
#g++ analyser.cc -std=c++11 -I `root-config --incdir` -L. `root-config --libs` -o analyser
#g++ plotter.cc -std=c++11 -I `root-config --incdir` -L. `root-config --libs` -o plotter
#cd -
